import java.util.*;

public class SetToZero {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x,y;
        System.out.println("m x n");
        x = in.nextInt();
        y = in.nextInt();
        int[][] matrix = new int[x][y];
        for(int i = 0; i<x; i++){
            for(int j = 0; j<y; j++){
                matrix[i][j] = in.nextInt();
                if(matrix[i][j] == 0){
                    
                }
                //System.out.println(matrix[i][j]);
            }
        }
        in.close();
    }
}
