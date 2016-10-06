package;

import flixel.FlxSprite;
import flixel.FlxObject;

class CoinBullet extends Entity{

	public function new(X:Int, Y:Int, AX:Int, AY:Int, Play:PlayState)
	{	
		super(X,Y,Play,"CoinBullet");
		loadGraphic("assets/images/coin.png",true,16,16);

		this.setSize(12,12);

		animation.add("walking", [0], 6, true);

		this.velocity.set(AX,AY);

	}


	override public function update(elapsed:Float):Void
	{ 
		
		if (velocity.x > 0 || velocity.x < 0) 
		{ 
			animation.play("walking"); 
		}

		if ( (isTouching(FlxObject.RIGHT)) || (isTouching(FlxObject.LEFT)) || (isTouching(FlxObject.DOWN)) || (isTouching(FlxObject.UP)) ) 
		{
			kill();
		}
		
		super.update(elapsed);

	}

	override public function collide(o1:Entity,o2:Entity):Void
	{
		if((o1.checkTag("Alive")) || (o2.checkTag("Alive"))) {
			o1.kill();
			o2.kill();
		}
	}
	
}