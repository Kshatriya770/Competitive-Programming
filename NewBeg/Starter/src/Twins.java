import java.util.Scanner;

public class Twins {
    /**
     * @param args
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        int arr1[] = new int[n];

        for(int i = 0; i<n; i++){
            arr[i] = in.nextInt();
        }
        for(int i = 0; i<n; i++){
            arr1[i] = in.nextInt();
        }
        int sum = 0; 
        int sum1 = 0;
        for(int i = 0; i<n; i++){
            sum = sum + arr[i];
            sum1 = sum1 + arr1[i];
        }

        int temp = 0;
        int temp1 = 0; 
        for(int i = 0; i<n-1; i++){
            if(arr[i] + arr[i+1] > arr1[i] + arr1[i+1]){
                
            }
        }
    }
}
