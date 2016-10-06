package abilites.megaJump;


import flixel.FlxSprite;
import flixel.FlxObject;

class MegaJump extends Ability
{
	public function new(Object:FlxSprite,State:PlayState)
	{
		super(Object,State);
	}
	
	override public function use(elapsed:Float):Void
	{
		
		var p:Player = cast Object;
		p.velocity.y = -1000;
		p.ability = new Ability(cast p,State);
	}
}