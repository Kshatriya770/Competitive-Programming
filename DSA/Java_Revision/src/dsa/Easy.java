package dsa;

import java.util.Scanner;

public class Easy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		int p = 3;
		s = s.substring(0,p) + s.substring(p+1);
		System.out.println("0" +s);
	}

}
