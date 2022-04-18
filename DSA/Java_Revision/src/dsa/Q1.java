package dsa;

import java.util.Scanner;

public class Q1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		
		int n = Integer.parseInt(s);
		
		int sum = 0;
		while (n > 0 && sum < 46)
        {
            if (n == 0) {
                n = sum;
                sum = 0;
            }
            sum += n % 10;
            n /= 10;
        }
		System.out.println(45 - sum);

	}

}
