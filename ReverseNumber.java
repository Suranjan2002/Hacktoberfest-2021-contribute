import java.util.Scanner;
class ReverseNumber
{
	static int reverse(int n) 
	{
		int r,s=0;
		while(n>0)
		{
			r=n%10;
			s=s*10+r;
			n=n/10;
		}
		return s;
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int T= sc.nextInt();
		for (int i= 0;i< T;i++) 
		{
      System.out.println("Enter a number to reverse it ");
			int n= sc.nextInt();
			int k=reverse(n);
			System.out.println(k);
		}
	}
}
