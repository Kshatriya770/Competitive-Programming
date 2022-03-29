package dsa;

import java.util.Scanner;

public class MinPositive {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		if(n%2 == 0) {
			System.out.println(n);
		}else {
			System.out.println(n*2);
		}

	}

}
