package clas;
interface Vechile{
	
	void changeGear(int a);
	void speedUp(int a); 
    void applyBrakes(int a); 
}

public class racingTest extends Thread implements Vechile {
		
		int speed;
		int gear;
	
		public racingTest() {
			start();
			}
			public void run() {
			for(int i=0;i<10;i++){
			System.out.println("Bike 2 (" + i + ")");
			try{
			Thread.sleep(100);
			}catch(InterruptedException e) {}
			}
			}
			
			
			@Override
			public void changeGear(int newGear) {
				// TODO Auto-generated method stub
				gear = newGear; 
			}
			@Override
			public void speedUp(int increment) {
				// TODO Auto-generated method stub
				speed = speed + increment; 
			}
			@Override
			public void applyBrakes(int decrement) {
				// TODO Auto-generated method stub
				speed = speed - decrement; 
			}
			
			public void printStates() { 
		         System.out.println("speed: " + speed ); 
		         System.out.println("gear: " + gear);
		    } 

	}
