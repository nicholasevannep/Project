package clas;

public class payment {
	String who;
	int price;
	int time;
	String paymentMethode;
	int total;
	public String getWho() {
		return who;
	}
	public void setWho(String who) {
		this.who = who;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public int getTime() {
		return time;
	}
	public void setTime(int time) {
		this.time = time;
	}
	public String getPaymentMethode() {
		return paymentMethode;
	}
	public void setPaymentMethode(String paymentMethode) {
		this.paymentMethode = paymentMethode;
	}
	public int getTotal() {
		return total;
	}
	public void setTotal(int total) {
		this.total = total;
	}
	public payment(String who, int price, int time, String paymentMethode, int total) {
		super();
		this.who = who;
		this.price = price;
		this.time = time;
		this.paymentMethode = paymentMethode;
		this.total = total;
	}
	 
}
