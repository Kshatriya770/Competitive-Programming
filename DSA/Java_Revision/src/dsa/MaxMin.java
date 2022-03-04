package dsa;
import java.util.*;

public class MaxMin {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0) {
			int n = sc.nextInt();
			int a[] = new int[n];
			for(int i = 0; i<n;i++) {
				a[i] = sc.nextInt();
			}
			int min=a[0], max = a[0];
			for(int i = 0; i<n; i++) {
				if(min > a[i]) {
					min = a[i];
				}
			}
			System.out.println(min);
			for(int i = 0; i<n; i++) {
				if(max < a[i]) {
					max = a[i];
				}
			}
			System.out.println(max);
		}
		sc.close();
	}

}
