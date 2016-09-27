package;

import flixel.FlxSprite;
import flixel.FlxObject;


class Entity extends FlxSprite
{

	public var play:PlayState;
	public var name:String;

	public function new(X:Int,Y:Int,play:PlayState,name:String = "null")
	{
		super(X,Y);
		this.play = play;
		this.name = name;
	}

	public function collide(o1:Entity,o2:Entity):Void
	{

	}

}