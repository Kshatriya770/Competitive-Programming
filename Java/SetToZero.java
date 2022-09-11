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
            }
        }

        for(int i = 0; i<x; i++){
            for(int j = 0; j<y; j++){
                if(matrix[i][j] == 0){
                    for(int k = 0;k<x; k++){
                        matrix[i][k] = 0;
                    }
                    for(int k = 0;k<y; k++){
                        matrix[k][j] = 0;
                    }
                }
            }
        }
        for(int i = 0; i<x; i++){
            for(int j = 0; j<y; j++){
                System.out.println(matrix[i][j]);
            }
        }
        in.close();
    }
}
