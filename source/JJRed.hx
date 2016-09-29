package;

import flixel.FlxSprite;
import flixel.FlxObject;

class JJRed extends Entity{
	public static inline var GRAVITY:Int = 620;
	

	public function new(X:Int, Y:Int, Play:PlayState)
	{	
		super(X,Y,Play);
		loadGraphic("assets/images/jjred.png",true,16,16);

		animation.add("walking", [0, 1], 6, true);
		animation.add("idle", [0]);
		
	}


	override public function update(elapsed:Float):Void
	{ 
		acceleration.y = GRAVITY;	
	
		if (velocity.x > 0 || velocity.x < 0) 
		{ 
			animation.play("walking"); 
		}
		else if (velocity.x == 0) 
		{ 
			animation.play("idle"); 
		}
		
		var p:Player = play.loader.player;
		if((p.x >= this.x - 32) && (p.y >= this.y - 32) && (p.x <= this.x) && (p.y <= this.y)) {
			velocity.y = -150;
		} 
		if((p.x >= this.x) && (p.y >= this.y) && (p.x <= this.x + 32) && (p.y <= this.y + 32)) {
			velocity.y = -150;
		} 

		super.update(elapsed);

	}

	override public function collide(o1:Entity,o2:Entity):Void
	{

		if(o2.name == "Player"){
			o2.kill();
		}
	}
}