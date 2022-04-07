import java.util.*;

class Divide_Students_Into_Classes {

    public static void main(String[] args){
        Scanner x = new Scanner(System.in);
        int t = x.nextInt();
        while(t-->0){
            int n = x.nextInt();
            int a[] = new int[n];
            for(int i = 0;i <n;i++){
                a[i] = x.nextInt();
            }
            if(n < 12){
                System.out.println("no");
            }else{
                System.out.println("yes");
            }
        }
        x.close();
    }
}