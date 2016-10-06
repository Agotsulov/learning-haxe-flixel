package;

import flixel.FlxSprite;
import flixel.FlxObject;

class OCB extends Ability{
	
	public function new(Object:FlxSprite,State:PlayState)
	{
		super(Object,State);
	}
	
	override public function use(elapsed:Float):Void
	{
		trace(Object.facing);
		if(Object.facing == FlxObject.RIGHT){	
			var CB:CoinBullet = new CoinBullet(cast (Object.x + 24),cast (Object.y),100,0,State);
			State.add(CB);
			State.loader.actors.add(CB);
			var p:Player = cast Object;
			trace(p.facing);
			p.ability = new Ability(cast p,State);
	
		}else if(Object.facing == FlxObject.LEFT){	
			var CB:CoinBullet = new CoinBullet(cast (Object.x + 24),cast (Object.y),-100,0,State);
			State.add(CB);
			State.loader.actors.add(CB);
			var p:Player = cast Object;
			p.ability = new Ability(cast p,State);
	
		}
	}

}