import java.util.*;

public class Check{
    /**
     * @param args
     */
    public static void main(String[] args){
        Scanner x = new Scanner(System.in);
        int b = 0;
        int n = x.nextInt();

        while( n != 0){
            b = n;
            n = x.nextInt();
            if(n == 0){
                break;
            }
            else if(b>n){
                n = b;
            }
        }
        System.out.println("Max : " +b);
        x.close();
    }
}