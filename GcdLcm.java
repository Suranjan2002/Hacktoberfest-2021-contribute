import java.util.*;
public class GcdLcm {
    public static int gcd(int a, int b)
    {
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t= in.nextInt();
        for(int i=1; i<=t; i++)
        {
            int a = in.nextInt();
            int b = in.nextInt();
            int res1=gcd(a,b);
            int res2=a*b/res1;
            System.out.println(res1 + "\t" + res2);
        }
    }
}
