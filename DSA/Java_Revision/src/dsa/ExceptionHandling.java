package dsa;

public class ExceptionHandling {

	public static void main(String[] args) {
		
		int a[] = new int[3];
		try {
			System.out.println(a[4]);
		}
		catch(Exception e){
			System.out.println(" error detected in code");
			System.out.println(e.getLocalizedMessage());
		}
		
	}

}
