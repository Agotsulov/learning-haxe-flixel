package actors;

class Checkpoint extends Entity{

	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y,play,"Checkpoint");
		loadGraphic("assets/images/checkpoint.png",true,16,16);

		animation.add("off", [0]);
		animation.add("on", [1]);

		this.setSize(16,16);
	}



	override public function collide(o1:Entity,o2:Entity):Void
	{
	}


}