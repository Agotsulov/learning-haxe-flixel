package;

class Spike extends Entity{

	public function new(X:Int,Y:Int,play:PlayState)
	{
		super(X,Y,play);
		this.name = "Spike";
		loadGraphic("assets/images/spike.png",true,16,16);
		this.setSize(16,16);
	}



	override public function collide(o1:Entity,o2:Entity):Void
	{

		if(o1.name != "Spike") 
		{
			o1.kill();
		} else if(o2.name != "Spike") 
		{
			o2.kill();
		}
	}
}