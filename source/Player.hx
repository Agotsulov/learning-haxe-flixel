package;

import abilites.megaJump.MegaJump;
import flixel.input.keyboard.FlxKey;
import openfl.Assets;
import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.text.FlxText;

class Player extends Entity{

	public static inline var RUN_SPEED:Int = 150;
	public static inline var GRAVITY:Int = 620;
	public static inline var JUMP_SPEED:Int = 250;
	public static var HEALTH:Int = 100;
	public var ability:Ability;
	public var coins:Int = 0;
	public var textCoins:FlxText;
	public var textHealth:FlxText;
	
	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y,play,"Player");

		loadGraphic("assets/images/player.png",true,16,16);

		animation.add("walking", [0, 1, 2, 3], 12, true);
		animation.add("idle", [3]);
		animation.add("jump", [2]);
		
		drag.set(RUN_SPEED * 8, RUN_SPEED * 8);
		maxVelocity.set(RUN_SPEED * 3, JUMP_SPEED * 3);
		acceleration.y = GRAVITY;
		setSize(12, 16);

		//ability = new Ability(cast this,play);
		ability = new MegaJump(cast this,play);

		
		addTag("Alive");
		
		health = HEALTH;


		play.add(textCoins = new FlxText(10, 10, 200, "Coin = " + coins,18));
		play.add(textHealth = new FlxText(100, 10, 200, "Health = " + health,18));

		textHealth.scrollFactor.set(0, 0);
		textCoins.scrollFactor.set(0, 0);
	}

	override public function update(elapsed:Float):Void
	{
		acceleration.x = 0;
		

		if (FlxG.keys.anyPressed([LEFT, A]))
		{
			flipX = true;
			acceleration.x = -RUN_SPEED;
		
		}
		
		else if (FlxG.keys.anyPressed([RIGHT, D]))
		{
			flipX = false;				
			acceleration.x = RUN_SPEED;
		
		}
		
		if (FlxG.keys.anyPressed([UP, W]) && isTouching(FlxObject.FLOOR))
		{
			velocity.y = -JUMP_SPEED;
		}
		else {
			acceleration.y = GRAVITY;
		}
		
		if (FlxG.keys.anyPressed([Z]))
		{				
			ability.use(elapsed);
			trace(coins);
		}
		
		
		if (velocity.x > 0 || velocity.x < 0) 
		{ 
			animation.play("walking"); 
		}
		else if (velocity.x == 0) 
		{ 
			animation.play("idle"); 
		}
		if (velocity.y < 0) 
		{ 
			animation.play("jump"); 
		}	
		textCoins.text = "Coin = " + coins;
		textHealth.text = "Health = " + health;
		if(y >= 600) this.kill();
		super.update(elapsed);
	}

	override public function collide(o1:Entity,o2:Entity):Void
	{

		if((o1.name == "JJ") && (velocity.y > 11) && (!isTouching(FlxObject.FLOOR))){ 	
			o1.kill();
			velocity.y = -200;
		}

		if((o2.name == "JJ") && (velocity.y > 11) && (!isTouching(FlxObject.FLOOR))){ 
			o2.kill();
			velocity.y = -200;
		}

		if((o1.name == "JJRed") && (velocity.y > 11) && (!isTouching(FlxObject.FLOOR))){ 	
			o1.kill();
			velocity.y = -200;
		}

		if((o2.name == "JJRed") && (velocity.y > 11) && (!isTouching(FlxObject.FLOOR))){ 
			o2.kill();
			velocity.y = -200;
		}
	}

	

	override public function kill()
	{

		play.add(new FlxText(this.x, this.y + 10, 100, "R to reset",20));
		super.kill();
	}
}