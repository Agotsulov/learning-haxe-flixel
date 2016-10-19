package;

import flixel.FlxSprite;
import flixel.FlxObject;

class Coin extends Entity{
	
	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y,play,"Coin");
		loadGraphic("assets/images/coin.png",true,16,16);
		//createRectangularBody(16, 16);
		createCircularBody(8);
		body.allowRotation = true;
		setBodyMaterial(0, 0, 0);
		pixelPerfectRender = true;
		//body.velocity.y = 250;
	}



	override public function collide(o1:Entity,o2:Entity):Void
	{

		if(o1.name == "Player") 
		{
			var p:Player = cast o1;
			p.coins ++;
			this.kill();
		} else if(o2.name == "Player") 
		{
			var p:Player = cast o2;
			p.coins ++;
			this.kill();
		}
	}

}