package;

import flixel.FlxSprite;
import flixel.FlxObject;


class Ability
{

	public var Object:FlxObject;
	public var State:PlayState;

	public function new(Object:FlxObject,State:PlayState)
	{
		this.Object = Object;
		this.State = State;
	}
	
	public function use(elapsed:Float):Void
	{
		trace("Seek strength, other will follow");
	}
}