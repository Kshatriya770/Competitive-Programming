/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t-->0){
		    int g1 = in.nextInt();
		    int s1 = in.nextInt();
		    int b1 = in.nextInt();
		    int g2 = in.nextInt();
		    int s2 = in.nextInt();
		    int b2 = in.nextInt();
		    int c1 = g1 + s1 + b1;
		    int c2 = g2 + s2 + b2;
		    if (c1>c2){
		        System.out.println(1);
		    }else{
		        System.out.println(2);
		    }
		}
	}
}
