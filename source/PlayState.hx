package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.graphics.frames.FlxImageFrame;
import flixel.graphics.frames.FlxTileFrames;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.util.FlxColor;
import nape.constraint.PivotJoint;
import nape.geom.AABB;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyList;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import openfl.Assets;
import openfl.geom.Matrix;
import openfl.display.Sprite;
import openfl.display.BlendMode;
import openfl.display.BitmapData;
import openfl.display.BitmapDataChannel;
import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeSprite;
import flixel.addons.nape.FlxNapeTilemap;

class PlayState extends FlxState
{
	private var bodyList:BodyList = null;
	public var player:Player;
	public  var loader:MapLoader;
	private var bomb:Sprite;
	private var hand:PivotJoint;
	private var folderpath:String;

	public function new(folderpath:String = "assets/levels/map1/"){
		this.folderpath = folderpath;
		super();

	}

	override public function create():Void
	{

		loadLevel(folderpath);

		super.create();
	}

	override public function update(elapsed:Float):Void
	{
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
			//FlxG.resetState();
			var p:PlayState = new PlayState(folderpath);
			FlxG.switchState(p);
		
			//loadLevel(loader.path);
		}
	}

	public function loadLevel(path:String):Void
	{
		//this.clear();
		


		loader = new MapLoader(path,this); 
		add(loader.background);
		add(loader.map);
		add(loader.actors);
		add(loader.terrain.sprite);

		//add(player = new Player(10,10,this));
	}

	public function addActor(actor:Entity){
		add(actor);
		loader.actors.add(actor);
	}
}


