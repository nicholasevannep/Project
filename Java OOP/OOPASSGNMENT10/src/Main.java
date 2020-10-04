
public class Main {

	public Main() {
		Shape<Integer> integerObject = new Shape<Integer>(21);
		Shape<Double> doubleObject = new Shape<Double>(2.1);
		Shape<String> stringObject = new Shape<String>("Twenty One");
		
		System.out.println(integerObject.getObj());
		System.out.println(doubleObject.getObj());
		System.out.println(stringObject.getObj());
		
	}
	
	public static void main(String[] args) {
		new Main();
	}
}
