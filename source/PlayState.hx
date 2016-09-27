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
		loader = new MapLoader("assets/levels/map1/",this); 
		//add(loader.background);
		add(loader.map);

		add(loader.actors);
		
		add(player = new Player(10,10,this));
		
		FlxG.camera.follow(player, PLATFORMER, 1); 

		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		FlxG.collide(player,loader.map);
		super.update(elapsed);
		FlxG.overlap(player,loader.actors,player.collide);
	}
}
