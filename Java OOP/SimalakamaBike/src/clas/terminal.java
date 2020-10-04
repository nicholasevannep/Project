package clas;

public class terminal extends functionList {

	String terminalLoc;
	int jumlahSepeda;
	public String getTerminalLoc() {
		return terminalLoc;
	}
	public void setTerminalLoc(String terminalLoc) {
		this.terminalLoc = terminalLoc;
	}
	public int getJumlahSepeda() {
		return jumlahSepeda;
	}
	public void setJumlahSepeda(int jumlahSepeda) {
		this.jumlahSepeda = jumlahSepeda;
	}
	public terminal(String terminalLoc, int jumlahSepeda) {
		super();
		this.terminalLoc = terminalLoc;
		this.jumlahSepeda = jumlahSepeda;
	}
	@Override
	void areyouready() {
		// TODO Auto-generated method stub
		System.out.println("Are You ready !?");
	}
	@Override
	void programstart() {
		// TODO Auto-generated method stub
		System.out.println("Progam Starting");
	}

}
