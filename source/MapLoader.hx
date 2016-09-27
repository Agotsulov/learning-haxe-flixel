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

	public function new(foldername:String,play:PlayState)
	{	
		background = new FlxTilemap();
		map = new FlxTilemap();
		
		background.loadMapFromCSV(foldername + "b.csv", foldername + "tileset.png", 16, 16,OFF,1,1);
		map.loadMapFromCSV(foldername + "m.csv", foldername + "tileset.png", 16, 16,OFF,1,1);
	
		actors = new FlxGroup();

		
		var coords:Array<String>;
		var entities:Array<String> = Assets.getText(foldername + "a.csv").split("\n");   
		
		for (j in 0...entities.length)
		{
			coords = entities[j].split(","); 
			
			if (Std.parseInt(coords[0]) == 0){
				actors.add(new JJ(Std.parseInt(coords[1]),Std.parseInt(coords[2]),play));
			}

		}
		
	}




}