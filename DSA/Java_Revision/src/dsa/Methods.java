package dsa;

public class Methods {

	public static void main(String[] args) {
		System.out.println(average(4,5));

	}
	
	//method or function
	//returnType functionName (arguments){}
	static int average(int first, int second) {
		int sum = first + second;
		return sum/2; 
	}
	

}
