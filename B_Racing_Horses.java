import java.util.*;
import java.lang.*;
import java.io.*;

class RacingHorses
{
	public static void main (String[] args) throws java.lang.Exception
	{
	Scanner sc = new Scanner (System.in);
	int t = sc.nextInt();
	while(t-->0){
	    int n = sc.nextInt();
	    int [] a = new int [n];
	    for(int i =0 ;i <n;i++){
	       a[i] = sc.nextInt();
	    }
	    Arrays.sort(a);
	    int ans = a[1]-a[0];
	    for(int i = 2 ; i <n ;i++ ){
	       ans = Math.min(ans,a[i]-a[i-1]);
	    }
	    System.out.println(ans);
	}
	
	}
}
