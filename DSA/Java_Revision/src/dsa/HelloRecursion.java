package dsa;

public class HelloRecursion {
	
	public static void printHello(int n) {
		if(n == 0) {
			return;
		}else {
			System.out.println("Hello");
			printHello(n-1);
		}
		
	}

	public static void main(String[] args) {
		printHello(10);

	}

}
