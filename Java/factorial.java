import java.util.*;
class factorial 
{	
	static int fact(int n)
    {
		int f= 1;
        if(n==0)
           return 1;
        int i = n;
        while(n/i!= n) 
		{
            f=f*i;
            i--;
        }
        return f;
    }
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int i=0;
		while(i<T)
		{
			int n= sc.nextInt();
			System.out.println(fact(n));
			i++;
		}
	}
}
