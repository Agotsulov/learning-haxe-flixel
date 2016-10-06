package;

import flixel.FlxSprite;
import flixel.FlxObject;


class Entity extends FlxSprite
{

	public var play:PlayState;
	public var name:String;
	public var hurtCooldown:Float = 1;
	public var lastHurt:Float = 0;		
	public var canHurt:Bool = true;	
	public var tags:List<String>;
	
	public function new(X:Int,Y:Int,play:PlayState,name:String = "null",hurtCooldown = 1/20)
	{
		super(X,Y);
		tags = new List<String>();
		tags.add(name);
		this.play = play;
		this.name = tags.first();
		this.hurtCooldown = hurtCooldown;
	}

	override public function update(elapsed:Float){
		lastHurt += elapsed;
		if(lastHurt >= hurtCooldown) {
			lastHurt = 0;
			canHurt = true;
		}
		if(health <= 0) this.kill();
		super.update(elapsed);
	}

	override public function hurt(Damage:Float):Void
	{
		if(canHurt) {
			health -= Damage;
			canHurt = false;
		}
	}

	public function collide(o1:Entity,o2:Entity):Void
	{

	}

	public function addTag(str:String):Void
	{
		tags.add(str);
	}

	public function checkTag(str:String):Bool
	{
		for(tag in tags){
			if(tag == str) return true;
		}
		return false;
	}
}