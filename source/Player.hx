package;

import flixel.addons.nape.FlxNapeSprite;
import nape.geom.Vec2;
import nape.dynamics.Arbiter;
import flixel.FlxG;
import flixel.util.FlxColor;
import nape.phys.Material;
import flixel.FlxObject;
import flixel.text.FlxText;
import nape.dynamics.CollisionArbiter;

class Player extends Entity
{
	static inline var speed:Int = 200;


	public var coins:Int = 0;
	public static var HEALTH:Int = 100;
	public var textCoins:FlxText;
	public var textHealth:FlxText;
	

	public function new(X:Int, Y:Int,play:PlayState)
	{
		super(X, Y,play,"Player");
		makeGraphic(16, 16, FlxColor.BLUE);
		
		loadGraphic("assets/images/player.png",true,16,16);

		animation.add("walking", [0, 1, 2, 3], 12, true);
		animation.add("idle", [3]);
		animation.add("jump", [2]);

		//createRectangularBody(12, 16);
		createCircularBody(8);
		body.allowRotation = false;
		setBodyMaterial(0, 0, 0);
		pixelPerfectRender = false;
		FlxG.camera.follow(this,PLATFORMER, 1); 
	
		health = HEALTH;


		play.add(textCoins = new FlxText(10, 10, 200, "Coin = " + coins,18));
		play.add(textHealth = new FlxText(100, 10, 200, "Health = " + health,18));
		
		textHealth.scrollFactor.set(0, 0);
		textCoins.scrollFactor.set(0, 0);
	
	}

	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.keys.anyPressed([A, LEFT]))
		{
			body.velocity.x = -speed;
		}
		else if (FlxG.keys.anyPressed([D, RIGHT]))
		{
			body.velocity.x = speed;
		}
		else
		{
			body.velocity.x = 0;
		}

		if ((FlxG.keys.anyPressed([W, UP])) )
		{	
            for(arbiter in body.arbiters)
       		{

       			if(arbiter.isCollisionArbiter()){
       				if((arbiter.collisionArbiter.normal.y < 0) && (arbiter.collisionArbiter.normal.x > -0.5) && (arbiter.collisionArbiter.normal.x < 0.5)){
       					body.velocity.y = -speed * 2; 
       					break;		
       				}

      			}
 
       		}
		}

		textCoins.text = "Coin = " + coins;
		textHealth.text = "Health = " + health;
		if (body.velocity.x > 0 || body.velocity.x < 0) 
		{ 
			animation.play("walking"); 
		}
		else if (body.velocity.x == 0) 
		{ 
			animation.play("idle"); 
		}
		if (body.velocity.y < 0) 
		{ 
			animation.play("jump"); 
		}	
		
		
		super.update(elapsed);
	}
}