package dsa;

import java.util.Scanner;

public class UnionArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		int c[] = new int[a];
		int d[] = new int[b];
		for(int i = 0; i<a;i++) {
			c[i] = sc.nextInt();
		}
		for(int i = 0; i<b;i++) {
			d[i] = sc.nextInt();
		}
		if(a>b) {
			for(int j = 0;j<b;j++) {
				for(int i = 0;i<a;i++) {
					if(d[j] == c[i]) {
						
					}
				}
			}
		}

	}

}
