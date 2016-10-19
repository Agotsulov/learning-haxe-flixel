package;

import flixel.addons.nape.FlxNapeSpace;
import flixel.addons.nape.FlxNapeTilemap;
import flixel.tile.FlxTilemap;
import flixel.group.FlxGroup;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import openfl.Assets;
import nape.geom.Vec2;
import nape.geom.AABB;

class MapLoader {

	public var background:FlxSprite;
	public var map:FlxSprite;
	public var terrain:Terrain;

	public var actors:FlxGroup;
	public var player:Player;

	public var path:String;

	public function new(foldername:String,play:PlayState)
	{	
			

		var w:Int = FlxG.width;
		var h:Int = FlxG.height;
	
		path = foldername;

		background = new FlxSprite();
		background.loadGraphic(foldername + "b.png");
		
		
		map = new FlxSprite();
		map.loadGraphic(foldername + "m.png");
		


		
		FlxNapeSpace.init();
		
		FlxNapeSpace.space.gravity = new Vec2(0, 600);
		
		//FlxNapeSpace.createWalls();
		
		FlxNapeSpace.drawDebug = true;
		
		var bit = Assets.getBitmapData(foldername + "m.png");
		terrain = new Terrain(bit, 64, 8);
		terrain.invalidate(new AABB(0, 0, bit.width, bit.height), play);
		
		

	
		actors = new FlxGroup();
	
		var coords:Array<String>;
		var entities:Array<String> = Assets.getText(foldername + "a.csv").split("\n");   
		


		

		for (j in 0...entities.length)
		{
			coords = entities[j].split(","); 
			
			if (coords[0] == "jj"){
				//actors.add(new JJ(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play));
			}


			if (coords[0] == "player"){
				//player = new Player(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play); 
				//FlxG.worldBounds.set(0,0,map.widthInTiles * 16,map.heightInTiles * 16);
				//FlxG.camera.follow(player,PLATFORMER, 1); 
				player = new Player(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play);
				actors.add(player);

			}

			if (coords[0] == "coin"){
				actors.add(new Coin(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play));
			}

			if (coords[0] == "spike"){
				//actors.add(new Spike(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play));
			}

			if (coords[0] == "jjred"){
				actors.add(new JJRed(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play));
			}

		}
	
		
		var aa:Array<String>;
		var doors:Array<String> = Assets.getText(foldername + "d.csv").split("\n");   
		
		for (j in 0...doors.length)
		{
			aa = doors[j].split(","); 
			if((aa[2] != null) && (aa[1] != null)) actors.add(new Door(Std.parseInt(aa[1]),Std.parseInt(aa[2]),play,aa[0]));
		}		

	}

	public function getEntity(name:String):Entity
	{
		for(a in actors){
			var e:Entity = cast a;
			if(e.name == name) return e;
		}
		return null;
	}

}