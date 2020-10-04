package clas;

public class user {

	int userId;
	String userNama;
	int userUmur;
	public int getUserId() {
		return userId;
	}
	public void setUserId(int userId) {
		this.userId = userId;
	}
	public String getUserNama() {
		return userNama;
	}
	public void setUserNama(String userNama) {
		this.userNama = userNama;
	}
	public int getUserUmur() {
		return userUmur;
	}
	public void setUserUmur(int userUmur) {
		this.userUmur = userUmur;
	}
	public user(int userId, String userNama, int userUmur) {
		super();
		this.userId = userId;
		this.userNama = userNama;
		this.userUmur = userUmur;
	}
	 

}
