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
		loadLevel("assets/levels/map1/");
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		FlxG.collide(player,loader.map);
		FlxG.collide(loader.actors,loader.map);
		super.update(elapsed);
		FlxG.overlap(player,loader.actors,player.collide);
		for(entity in loader.actors.members) {
			var e:Entity = cast entity;
			FlxG.overlap(e,player,e.collide);	
		}
	}


	public function loadLevel(path:String):Void
	{
		this.clear();
		loader = new MapLoader(path,this); 
		add(loader.background);
		add(loader.map);
		add(loader.actors);
		add(player = new Player(10,10,this));
		FlxG.camera.follow(player, PLATFORMER, 1); 


	}
}
