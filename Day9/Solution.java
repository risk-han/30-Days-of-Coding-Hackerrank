import java.util.Scanner;

public class Solution {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        in.close();
        System.out.println(factorial(n));
    }

    private static int factorial(int n){
        if ( n == 1){
            return 1;
        } else {
            int i, fact=1;
            for(i = 1; i<=n; i++){
                fact = fact*i;
            }

            return fact;
        }
    }
}