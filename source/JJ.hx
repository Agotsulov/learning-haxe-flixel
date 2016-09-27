package;

import 

class JJ extends Entity
{
	public function new(X:Int, Y:Int, Play:PlayState)
	{	
		super(X,Y,Play);
		loadGraphic("assets/image/jj.png",true,16,16);

		animation.add("walking", [0, 1], 16, true);
		animation.add("idle", [0]);
		animation.add("jump", [1]);
	
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

	override public function collide(o1:FlxObject,o2:FlxObject):Void
	{


	}
}