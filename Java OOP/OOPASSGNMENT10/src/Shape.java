
public class Shape<E> {

	 E obj;
	 
	public E getObj() {
		return obj;
	}

	public void setObj(E obj) {
		this.obj = obj;
	} 
	public Shape(E obj) {
		super();
		this.obj = obj;
	}

}
