import java.util.*;
class gcd_lcm
 {
    
	static long gcd(long a,long b) 
	{
        while(a!=b)
			{
            if(a>b) a=a-b;
            else b=b-a;
        }
        return a;
    }
    public static void main(String[] args)
	{
        Scanner input =new Scanner(System.in);
        int T=input.nextInt();
        long a,b,g,l;
        while(T-->0) 
		{
            a=input.nextInt();
            b=input.nextInt();
            g=gcd(a,b);
            l=(a*b)/g;
            System.out.println(g+" "+l);
        }
    }
}
