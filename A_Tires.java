import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class A_Tires {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s = br.readLine();
    br.close();
    System.out.println(
        s.endsWith("ist") ? s.substring(s.length() - 3) : s.substring(s.length() - 2));
  }
}
