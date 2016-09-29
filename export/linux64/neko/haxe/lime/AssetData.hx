package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map1/a.csv", "assets/levels/map1/a.csv");
			type.set ("assets/levels/map1/a.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map1/s.csv", "assets/levels/map1/s.csv");
			type.set ("assets/levels/map1/s.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map1/b.csv", "assets/levels/map1/b.csv");
			type.set ("assets/levels/map1/b.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map1/d.csv", "assets/levels/map1/d.csv");
			type.set ("assets/levels/map1/d.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map1/m.csv", "assets/levels/map1/m.csv");
			type.set ("assets/levels/map1/m.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map1/tileset.png", "assets/levels/map1/tileset.png");
			type.set ("assets/levels/map1/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/levels/map1/m.csv~", "assets/levels/map1/m.csv~");
			type.set ("assets/levels/map1/m.csv~", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/a.csv", "assets/levels/map2/a.csv");
			type.set ("assets/levels/map2/a.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/d.csv~", "assets/levels/map2/d.csv~");
			type.set ("assets/levels/map2/d.csv~", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/s.csv", "assets/levels/map2/s.csv");
			type.set ("assets/levels/map2/s.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/b.csv", "assets/levels/map2/b.csv");
			type.set ("assets/levels/map2/b.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/d.csv", "assets/levels/map2/d.csv");
			type.set ("assets/levels/map2/d.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/m.csv", "assets/levels/map2/m.csv");
			type.set ("assets/levels/map2/m.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/tileset.png", "assets/levels/map2/tileset.png");
			type.set ("assets/levels/map2/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/levels/map2/a.csv~", "assets/levels/map2/a.csv~");
			type.set ("assets/levels/map2/a.csv~", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/m.csv~", "assets/levels/map2/m.csv~");
			type.set ("assets/levels/map2/m.csv~", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/map2/b.csv~", "assets/levels/map2/b.csv~");
			type.set ("assets/levels/map2/b.csv~", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/s.csv", "assets/levels/s.csv");
			type.set ("assets/levels/s.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/b.csv", "assets/levels/b.csv");
			type.set ("assets/levels/b.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/m.csv", "assets/levels/m.csv");
			type.set ("assets/levels/m.csv", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/levels/tileset.png", "assets/levels/tileset.png");
			type.set ("assets/levels/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/door.png", "assets/images/door.png");
			type.set ("assets/images/door.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/coin.png", "assets/images/coin.png");
			type.set ("assets/images/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/jj.png", "assets/images/jj.png");
			type.set ("assets/images/jj.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/spike.png", "assets/images/spike.png");
			type.set ("assets/images/spike.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
