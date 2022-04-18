package dsa;

import java.util.Scanner;

public class Q2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int a,b,k;
		a = in.nextInt();
		b = in.nextInt();
		k = in.nextInt();
		int count = 0;
		while(a<b) {
			a = a*k;
			count++;
		}
		System.out.println(count);
		

	}

}
