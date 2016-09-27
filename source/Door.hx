package;

import flixel.FlxObject;
import flixel.FlxSprite;

class Door extends Entity
{
	public var folderpath:String;

	public function new(X:Int,Y:Int,play:PlayState,folderpath:String)
	{
		super(X,Y,play);
		this.folderpath = folderpath;
		this.setSize(16,32);
	}

	override public function collide(o1:Entity,o2:Entity):Void
	{

		trace(o1.name);

		trace(o2.name);

		if(o1.name == "Player") 
		{
			play.loadLevel(folderpath);
		} else if(o2.name == "Player") 
		{
			play.loadLevel(folderpath);
		}
	}
}