import java.util.*;

class B_Let_s_SOLVE_STRING {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        sc.nextLine();

        while (T-- > 0) {
            int n = sc.nextInt();
            int quotient = n / 25;
            int remainder = n % 25;

            if(remainder > 0) {
                for (int i = 'a' + remainder; i >= 'a'; i--) {
                    System.out.print((char) i);
                }
            }

            for(int i = 0; i < quotient; i++) {
                for(int j = 'z'; j >= 'a'; j--) {
                    System.out.print((char)j);
                }
            }

            System.out.println(" ");
        }
        sc.close();
    }
}
