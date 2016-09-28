package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{

	public var button:FlxButton;

	override public function create():Void
	{
		super.create();
 		button = new FlxButton(0,0,"Play",click);
 		button.screenCenter();
 		add(button);
	}

	public function click():Void
	{
		FlxG.switchState(new PlayState());
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}
