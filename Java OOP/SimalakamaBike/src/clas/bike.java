package clas;

public class bike {

	int bikeId;
	String bikeType;
	int bikeCondition;
	String bikeLoc;
	public int getBikeId() {
		return bikeId;
	}
	public void setBikeId(int bikeId) {
		this.bikeId = bikeId;
	}
	public String getBikeType() {
		return bikeType;
	}
	public void setBikeType(String bikeType) {
		this.bikeType = bikeType;
	}
	public int getBikeCondition() {
		return bikeCondition;
	}
	public void setBikeCondition(int bikeCondition) {
		this.bikeCondition = bikeCondition;
	}
	public String getBikeLoc() {
		return bikeLoc;
	}
	public void setBikeLoc(String bikeLoc) {
		this.bikeLoc = bikeLoc;
	}
	public bike(int bikeId, String bikeType, int bikeCondition, String bikeLoc) {
		super();
		this.bikeId = bikeId;
		this.bikeType = bikeType;
		this.bikeCondition = bikeCondition;
		this.bikeLoc = bikeLoc;
	}


}
