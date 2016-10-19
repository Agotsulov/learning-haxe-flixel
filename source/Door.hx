package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;

class Door extends Entity
{
	public var folderpath:String;

	public function new(X:Int,Y:Int,play:PlayState,folderpath:String)
	{
		super(X,Y,play);
		this.folderpath = folderpath;
		loadGraphic("assets/images/door.png",true,16,32);
		createRectangularBody(16, 32);
		body.allowRotation = false;
		setBodyMaterial(0, 0, 0);
		pixelPerfectRender = false;
		this.physicsEnabled = false;
		
	}

	override public function collide(o1:Entity,o2:Entity):Void
	{

		if(o1.name == "Player") 
		{
			//play.loadLevel(folderpath);
			var p:PlayState = new PlayState(folderpath);
			//p.loadLevel(folderpath);

			FlxG.switchState(p);
		} else if(o2.name == "Player") 
		{
			//play.loadLevel(folderpath);
			var p:PlayState = new PlayState(folderpath);
			//p.loadLevel(folderpath);
			FlxG.switchState(p);
		
			//FlxG.switchState(new PlayState());
		}
	}
}