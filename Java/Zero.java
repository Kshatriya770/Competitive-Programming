import java.util.*;

public class Zero {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b=0;
        while(a !=0){
            b = a;
            a = in.nextInt();
            if(a == 0){
                break;
            }
            else if(a<b){
                a = b;
            }
        }
        System.out.println(b);
        in.close();
    }
}
