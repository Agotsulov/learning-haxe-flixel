package;

import flixel.FlxSprite;
import flixel.FlxObject;

class OCB extends Ability{
	

	
	public function new(Object:FlxObject,State:PlayState)
	{
		super(Object,State);
	}
	
	override public function use(elapsed:Float):Void
	{
		var CB:CoinBullet = new CoinBullet(cast (Object.x + 24),cast (Object.y),100,0,State);
		State.add(CB);
		State.loader.actors.add(CB);
		var p:Player = cast Object;
		p.ability = new Ability(cast p,State);
	}

}