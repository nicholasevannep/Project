package clas;
import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;


public class Main  {
	public int bikeatAS=0;
	public int bikeatSMS=0;
	public int bikeatBSD=0;
	public int iduser=0;
	public int idbike=0;
	
	
	
	private Scanner sc=new Scanner(System.in);
	private ArrayList<user> userList = new ArrayList<>();
	private ArrayList<bike> bikeList = new ArrayList<>();
	private ArrayList<terminal> terminalList = new ArrayList<>();
	private ArrayList<payment> paymentList = new ArrayList<>();
	private Random rand= new Random();
	
	private void cls() {
	for(int i=0;i<30;i++) {
		System.out.println(" ");
		}
	}
	
	private int readInt(int lower_bound,int upper_bound){
		int ret=0;
			try {
			ret=sc.nextInt();
			}catch(Exception e){
			ret=-1;
		}
			sc.nextLine();
			if(ret<lower_bound||ret>upper_bound){
			ret=-1;
			}
			return ret;
		}
	
	
	public void terminalStart() {
	
		functionList menu = new terminal(null, bikeatAS);
		menu.areyouready();
		sc.nextLine();
		menu.programstart();
		sc.nextLine();
		for(int i=5;i>0;i--) {
			try{
				Thread.sleep(300);
				System.out.println(i);
				}catch(InterruptedException e) {}
				}
		System.out.println("Press Enter to Start");
		sc.nextLine();
		String nameAS="Alam Sutra";
		String nameSMS="Serpong";
		String nameBSD="BSD";
		
		terminal newtermin1= new terminal(nameAS,bikeatAS);
		terminal newtermin2= new terminal(nameSMS,bikeatSMS);
		terminal newtermin3= new terminal(nameBSD,bikeatBSD);
		terminalList.add(newtermin1);
		terminalList.add(newtermin2);
		terminalList.add(newtermin3);
		
	}
	
	private void racing() {
		racingTest baru = new racingTest();
		int speed = rand.nextInt(100);
		int gear  = rand.nextInt(5);
		baru.changeGear(gear);
		baru.speedUp(speed);
		for(int i=0;i<10;i++){
		System.out.println("Bike 1 (" + i + ")");
		try{
		Thread.sleep(100);
		}catch(InterruptedException e) {}
		}
		baru.printStates();
	}
	
	public void showUser() {
		if(userList.size()==0) {
			System.out.println("No User");}
		else {
			for(int i=0;i<userList.size();i++) {
				System.out.println("------------------------------------------ ");			
				System.out.println("User "+i);
				System.out.println("User Id \t\t : "+userList.get(i).getUserId());
				System.out.println("User name\t\t : "+userList.get(i).getUserNama());
				System.out.println("------------------------------------------ ");			
				System.out.println(" ");
				System.out.println(" ");
			}
		}
		System.out.println("Press Enter");
		sc.nextLine();
	}
	
	public void deleteUser() {
		showUser();
		int del;
		if(userList.size()==0) {
			System.out.println("No User");}
		else {
			do {
			System.out.print("Choose user to delete :");
			del=readInt(0,userList.size());
			}while(del<0||del>userList.size());
			System.out.println("Delete Complete");
			userList.remove(del);
			
		}
		System.out.println("Press Enter");
		sc.nextLine();
	}
	
	public void showBike() {
		if(bikeList.size()==0) {
			System.out.println("No Bike");}
		else {
			for(int i=0;i<bikeList.size();i++) {
				System.out.println("------------------------------------------ ");			
				System.out.println("Bike "+i);
				System.out.println("Bike Id \t\t : "+bikeList.get(i).getBikeId());
				System.out.println("Bike Type\t\t : "+bikeList.get(i).getBikeType());
				System.out.println("Bike Condition\t\t : "+bikeList.get(i).getBikeCondition());
				System.out.println("Bike Location\t\t : "+bikeList.get(i).getBikeLoc());
				System.out.println("------------------------------------------ ");			
				System.out.println(" ");
				System.out.println(" ");
			}
		}
		System.out.println("Press Enter");
		sc.nextLine();
	}
	public void deleteBike() {
		showBike();
		int del;
		if(bikeList.size()==0) {
			System.out.println("No Bike");}
		else {
			do {
			System.out.print("Choose bike to delete :");
			del=readInt(0,bikeList.size());
			}while(del<0||del>bikeList.size());
			if(bikeList.get(del).getBikeLoc()=="Alam Sutra") {
				bikeatAS--;
			}
			else if(bikeList.get(del).getBikeLoc()=="Serpong") {
				bikeatSMS--;
			}
			else if(bikeList.get(del).getBikeLoc()=="BSD") {
				bikeatBSD--;
			}
			System.out.println("Delete Complete");
			bikeList.remove(del);
		}
	}
	
	
	public void userMenu() {
		
		int menu;
		do {
			cls();
			System.out.println("========================================== ");
			System.out.println("                 User Menu                ");
			System.out.println("========================================== ");
		System.out.println("User Menu");
		System.out.println("1. Show User");
		System.out.println("2. Add User");
		System.out.println("3. Delete User");
		System.out.println("4. Back to Menu");
		System.out.print("Choose \t:");
		menu = readInt(1,4);
		if(menu==1) {
			showUser();
			
			}
		else if(menu==2) {
			User();
		}else if(menu==3) {
			deleteUser();
		}else if(menu==4) {
		
		}
		}while(menu!=4);
	}
	
	public void bikeMenu() {
	
		int menu;
		do {
		cls();
		System.out.println("========================================== ");
		System.out.println("                 Bike Menu                 ");
		System.out.println("========================================== ");
		System.out.println("Bike Menu");
		System.out.println("1. Show Bike");
		System.out.println("2. Add Bike");
		System.out.println("3. Delete Bike");
		System.out.println("4. Compare Bike");
		System.out.println("5. Back to Menu");
		System.out.print("Choose \t:");
		menu= readInt(1,5);
		if(menu==1) {
			showBike();
			}
		else if(menu==2) {
			Bike();
		}else if(menu==3) {
			deleteBike();
		}else if(menu==4) {
			if(bikeList.size()==0||bikeList.size()==1) {System.out.println("Not Enough Bike");
			System.out.println("Press Enter"); sc.nextLine();}
			else{
			showBike();
			System.out.print("Choose Bike 1 :");
			readInt(0,bikeList.size());
			System.out.print("Choose Bike 2 :");
			readInt(0,bikeList.size());
			racing();
			System.out.println("The First one to reach 9 is the Winner");
			System.out.println("Press Enter");
			sc.nextLine();}
			}
		else if(menu==5) {
		
		}
		}while(menu!=5);
		
		
	}
	
	public void User() {
		int id;
		String nama;
		int umur;
		System.out.print("Your Id \t\t\t:");
		id = iduser;
		System.out.println(id);
		System.out.print("Insert name\t\t\t:");
		nama = sc.nextLine();
		do {
		System.out.print("Insert umur\t\t\t:");
		umur = readInt(0,100);
		}while(umur<0||umur>100);
		user newuser = new user (id, nama, umur);
		userList.add(newuser);
		iduser+=1;
	}
	
	public void Bike() {
		int id;
		String type;
		int condition;
		int locat;
		String loc="";
		System.out.print("Bike Id \t\t\t:");
		id = idbike;
		System.out.println(id);
		System.out.print("Insert Type\t\t\t:");
		type = sc.nextLine();
		System.out.print("Condition\t\t\t:");
		condition = rand.nextInt(100);
		System.out.println(condition);
		do {
		System.out.println("Insert Loc\t\t\t:");
		System.out.println("\t1. Alam Sutra");
		System.out.println("\t2. Serpong");
		System.out.println("\t3. BSD");
		System.out.println("Choose Loc\t\t\t:");
		
			locat=readInt(1,3);
			if(locat==1) {
				loc="Alam Sutra";
				bikeatAS+=1;
				terminalList.get(0).setJumlahSepeda(bikeatAS);
			}else if(locat==2) {
				loc="Serpong";
				bikeatSMS+=1;
				terminalList.get(1).setJumlahSepeda(bikeatSMS);
			}else if(locat==3){
				loc="BSD";
				bikeatBSD+=1;
				terminalList.get(2).setJumlahSepeda(bikeatBSD);
			}
		}while(locat<1||locat>3);
		bike newbike = new bike(id,type,condition,loc);
		bikeList.add(newbike);
		idbike+=1;
	}
	
	private void Terminal(){
	
		System.out.println("------------------------------------------ ");	
		System.out.println("Location");
		System.out.print("1. Alam Sutra\t\t\t :");
		System.out.println(bikeatAS);
		
		System.out.print("2. Serpong\t\t\t :");
		System.out.println(bikeatSMS);
		
		System.out.print("3. BSD\t\t\t\t :");
		System.out.println(bikeatBSD);
		System.out.println("------------------------------------------ ");	
		System.out.println("Press Enter");
		sc.nextLine();
	}
	
	
	private void Payment() {
		int who;
		int price;
		int time;
		int metode;
		int total;
		String paymentmet="";
		if(userList.size()==0) {System.out.println("No user"+"\n"+"Press Enter"); sc.nextLine();}
		else if(bikeList.size()==0) {System.out.println("No bike"+"\n"+"Press Enter");sc.nextLine();}
		else {
		do {
		showUser();
		System.out.print("Choose user \t\t\t : ");
		who=readInt(0,userList.size());
		}while(who<0||who>userList.size());
		do {
		System.out.print("Inset Price/Hour[0-1000000]\t : ");
		price=readInt(0,1000000);
		}while(price<0||price>1000000);
		do {
		System.out.println("Insert Time[1-2400]\t\t :");
		time=readInt(1,2400);
		}while(time<1||time>2400);
	
		do {
			System.out.println("Insert Payment Methode\t:");
			System.out.println("\t1. Cash");
			System.out.println("\t2. OVO");
			System.out.println("\t3. GO Pay");
			System.out.println("\t4. Transfer");
			
			System.out.println("Choose Payment Methode\t\t:");
			
				metode=readInt(1,4);
				if(metode==1) {
					paymentmet="Cash";
				}else if(metode==2) {
					paymentmet="OVO";
				}else if(metode==3) {
					paymentmet="GO Pay";
				}
				else if(metode==4) {
					paymentmet="Transfer";
				}
		}while(metode<1||metode>4);
		total=price*time;
		System.out.println("Price To pay : "+total);
		System.out.println("Press Enter to Continue");
		sc.nextLine();
		payment newpayment= new payment(userList.get(who).getUserNama(),price,time,paymentmet,total);
		paymentList.add(newpayment);
		}
	}
	
	
	private void exit() {
		userList.clear();
		bikeList.clear();
		terminalList.clear();
		paymentList.clear();
		
	}
	
	
	public Main() {
		terminalStart();
		//	opening open = new opening();
		int menu;
		do {
			cls();
			System.out.println("========================================== ");
			System.out.println("                 Bike Rental               ");
			System.out.println("========================================== ");
	
			System.out.println("Menu\t:");
			System.out.println("1. User");
			System.out.println("2. Bike");
			System.out.println("3. Terminal");
			System.out.println("4. Payment");
			System.out.println("5. Recipt");
			System.out.println("6. Exit");
			System.out.print("Choose[1-6] \t: ");
			menu= readInt(1,7);
			if(menu==1) {
				//User
				userMenu();
			}
			else if(menu==2) {
				//Bike
				bikeMenu();
			}
			else if(menu==3) {
				//Terminal
				Terminal();
			}
			else if(menu==4) {
				//Payment
				Payment();
			}
			else if(menu==5) {
				//Recipt
				System.out.println("------------------------------------------ ");	
				if(paymentList.size()==0) {
				System.out.println("No Order");
				}else {
					for(int i=0;i<paymentList.size();i++) {
					System.out.println("");
					System.out.println("");
					System.out.println("Recipt");
					System.out.println("Name\t\t:"+paymentList.get(i).getWho());
					System.out.println("Price\t\t:"+paymentList.get(i).getPrice());
					System.out.println("Time\t\t:"+paymentList.get(i).getTime());
					System.out.println("Payment Methode\t:"+paymentList.get(i).getPaymentMethode());
					System.out.println("Total Payment\t:"+paymentList.get(i).getTotal());
					System.out.println("");
					System.out.println("");
					}
				}
				System.out.println("------------------------------------------ ");	
				System.out.println("Press Enter");
				sc.nextLine();
			}else if(menu==6) {
				//Exit
				exit();
			}
		}while(menu!=6);
		
	}
	public static void main(String[] args) {
		new Main();
	}

}
