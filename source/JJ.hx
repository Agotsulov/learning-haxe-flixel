package;

import flixel.FlxSprite;
import flixel.FlxObject;

class JJ extends Entity
{

	public static inline var GRAVITY:Int = 620;
	

	public function new(X:Int, Y:Int, Play:PlayState)
	{	
		super(X,Y,Play);
		loadGraphic("assets/images/jj.png",true,16,16);

		animation.add("walking", [0, 1], 6, true);
		animation.add("idle", [0]);
		
		acceleration.x = 100;
	}


	override public function update(elapsed:Float):Void
	{ 
		acceleration.y = GRAVITY;	
	
		if(isTouching(FlxObject.LEFT))  acceleration.x = 100;
		if(isTouching(FlxObject.RIGHT)) acceleration.x = -100;

		if (velocity.x > 0 || velocity.x < 0) 
		{ 
			animation.play("walking"); 
		}
		else if (velocity.x == 0) 
		{ 
			animation.play("idle"); 
		}
		
		super.update(elapsed);

	}

	override public function collide(o1:Entity,o2:Entity):Void
	{

		if(o2.name == "Player"){
			o2.kill();
		}
	}
}