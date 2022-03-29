package dsa;

import java.util.Scanner;

public class Two {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int a[] = new int[n];
		int count = 0;
		for(int i = 0; i<n; i++) {
			a[i] = sc.nextInt();
			int c  = a[i];
			while(c%2==0) {
				c = c/2;
				count++;
			}
		}
		System.out.println(count);

	}

}
