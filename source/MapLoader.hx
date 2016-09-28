package;

import flixel.tile.FlxTilemap;
import flixel.group.FlxGroup;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.util.FlxColor;
import openfl.Assets;

class MapLoader {

	public var background:FlxTilemap;
	public var map:FlxTilemap;

	public var actors:FlxGroup;
	public var player:Player;

	public var path:String;

	public function new(foldername:String,play:PlayState)
	{	
		background = new FlxTilemap();
		map = new FlxTilemap();
		
		path = foldername;

		background.loadMapFromCSV(foldername + "b.csv", foldername + "tileset.png", 16, 16,OFF,1,1);
		map.loadMapFromCSV(foldername + "m.csv", foldername + "tileset.png", 16, 16,OFF,1,1);
	
		actors = new FlxGroup();

				
		
		var coords:Array<String>;
		var entities:Array<String> = Assets.getText(foldername + "a.csv").split("\n");   
		
		for (j in 0...entities.length)
		{
			coords = entities[j].split(","); 
			
			if (coords[0] == "jj"){
				actors.add(new JJ(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play));
			}


			if (coords[0] == "player"){
				player = new Player(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play); 
				actors.add(player);
				FlxG.camera.follow(player, PLATFORMER, 1); 
			}

		}
	
		
		var aa:Array<String>;
		var doors:Array<String> = Assets.getText(foldername + "d.csv").split("\n");   
		
		for (j in 0...doors.length)
		{
			aa = doors[j].split(","); 
			trace(aa[0] + aa[1] + aa[2]); 
			if((aa[2] != null) && (aa[1] != null)) actors.add(new Door(Std.parseInt(aa[1]),Std.parseInt(aa[2]),play,aa[0]));
		}		

	}




}