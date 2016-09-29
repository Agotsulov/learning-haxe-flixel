package;

import flixel.FlxSprite;
import flixel.FlxObject;

class Coin extends Entity{
	
	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y,play);
		loadGraphic("assets/images/coin.png",true,16,16);
		this.setSize(16,16);
		acceleration.y = 250;
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