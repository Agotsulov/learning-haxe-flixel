package;

import flixel.FlxSprite;
import flixel.FlxObject;


class Entity extends FlxSprite
{


	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y);
	}

	public function collide(o1:FlxObject,o2:FlxObject):Void
	{

	}

}