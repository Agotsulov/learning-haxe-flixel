package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class PlayState extends FlxState
{

	public var player:Player;
	public var loader:MapLoader;

	override public function create():Void
	{
		loadLevel("assets/levels/map2/");
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		FlxG.collide(loader.actors,loader.map);
		super.update(elapsed);
		for(entity1 in loader.actors.members) {
			for(entity2 in loader.actors.members){
				var e1:Entity = cast entity1;
				var e2:Entity = cast entity2;
				if(e1 != e2) FlxG.overlap(e1,e2,e1.collide);
			}
		}
		if (FlxG.keys.anyPressed([R]))
		{
			loadLevel(loader.path);
		}

		

	}


	public function loadLevel(path:String):Void
	{
		this.clear();
		loader = new MapLoader(path,this); 
		add(loader.background);
		add(loader.map);
		add(loader.actors);
		//add(player = new Player(10,10,this));
		

	}
}
