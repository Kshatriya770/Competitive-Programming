package dsa;

import java.util.Scanner;

public class OddEven {

	public static void main(String[] args) {
		//via bit manipulation
		Scanner sc = new Scanner(System.in);
		int number = sc.nextInt();
		if((number & 1)  == 0) {
			System.out.println("Even");
		}else {
			System.out.println("Odd");
		}
		sc.close();
	}

}
