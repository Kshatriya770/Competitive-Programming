package dsa;
import java.util.*;


public class Hack1 {

	public static void main(String[] args) {
		// TODO checkit
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int count = 0;
//		while(((a>0 && b>0 ) && a+b>=3) || ((b>0 && c>0) && b+c>=3) || ((a>0 && c>0) && c+a>=3)){
//			a--;
//			b--;
//			c--;
//			count++;
//		}
		while(a+b+c >= 3) {
			if(a> 0 && b > 0 && c > 0) {
				a--;
				b--;
				c--;
				count++;
			}
		else if((a>0 && b>0) && a+b >=3) {
			if(a>b) {
				a= a-2;
				b--;
			}else {
				b = b-2;
				a--;
			}
			count++;
		}
		else if((b>0 && c>0) && b+c >=3) {
			if(b>c) {
				b = b-2;
				c--;
			}else {
				c = c-2;
				b--;
			}
			count++;
		}
		else if((c>0 && a>0) && a+c >=3) {
			if(c>a) {
				c = c-2;
				a--;
			}else {
				a = a-2;
				c--;
			}
			count++;
		}
		}
		System.out.println(count);
		sc.close();
	}

}
