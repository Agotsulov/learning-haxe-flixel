package;

import flixel.input.keyboard.FlxKey;
import openfl.Assets;
import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.FlxSprite;

class Player extends Entity{

	public static inline var RUN_SPEED:Int = 90;
	public static inline var GRAVITY:Int = 620;
	public static inline var JUMP_SPEED:Int = 250;
	

	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y,play,"Player");

		loadGraphic("assets/image/player.png",true,16,16);

		animation.add("walking", [0, 1, 2, 3], 12, true);
		animation.add("idle", [3]);
		animation.add("jump", [2]);
		
		drag.set(RUN_SPEED * 8, RUN_SPEED * 8);
		maxVelocity.set(RUN_SPEED, JUMP_SPEED);
		acceleration.y = GRAVITY;
		setSize(12, 16);
		offset.set(3, 4);
		
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
		
		
		super.update(elapsed);

	}

	override public function collide(o1:Entity,o2:Entity):Void
	{
		trace(this);
		trace("Object 1 = " + o1);
		trace("Object 2 = " + o2);
	}

}