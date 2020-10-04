import java.util.Scanner;

public class Calulator {
	public static void main(String[] args) {
		int op=0;
		int total=0;
		int num1=0;
		int num2=0;
	do {
		do{
			System.out.println("Calculator");
			System.out.println("==============");
			System.out.println("Total = "+total);
			System.out.println(" ");
			System.out.print("Input Number : ");
			Scanner sc=new Scanner(System.in);
			num1=sc.nextInt();
			sc.nextLine();
			System.out.println("1. Addition");
			System.out.println("2. Subtraction");
			System.out.println("3. Multiplication");
			System.out.println("4. Division");
			System.out.println("5. Modulo");
			System.out.println("6. Clear Total");
			System.out.println("7. Exit");
			System.out.print("Operator [1...7]: ");
			op=sc.nextInt();
			sc.nextLine();
				switch(op){
				case 1: System.out.print("Input Number : ");
						num2=sc.nextInt();
						sc.nextLine();
						total=total+(num1+num2);
						break;
				case 2: System.out.print("Input Number : ");
						num2=sc.nextInt();
						sc.nextLine();
						total=total+(num1-num2);
						break;
				case 3: System.out.print("Input Number : ");
						num2=sc.nextInt();
						sc.nextLine();
						total=total+(num1*num2);
						break;
				case 4: System.out.print("Input Number : ");
						num2=sc.nextInt();
						sc.nextLine();
						total=total+(num1/num2);
						break; 
				case 5: System.out.print("Input Number : ");
						num2=sc.nextInt();
						sc.nextLine();
						total=total+(num1%num2);
						break;
				case 6: total=0;
						break;
				case 7:	break;
			
				}
		}
		while(op<1&&op>7);
		for(int i=0;i<30;i++){
			System.out.println("");
		}
	}while(op!=7);
}
}
