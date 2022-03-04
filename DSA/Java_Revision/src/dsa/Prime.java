package dsa;
import java.util.*;
public class Prime {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int flag = 0;
		if(n == 0 || n == 1) {
			System.out.println("Not prime");
		}else {
			for(int i = 2; i<n; i++) {
			if(n%i == 0) {
				flag = 1;
				break;
			}
		}
		if(flag == 1) {
			System.out.println("NOt Prime");
		}else {
			System.out.println("Prime");
		}
	}
		

	}

}
