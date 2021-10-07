import java.util.*;

public class remainder
{
	public static int cal(int x, int y) 
	{
		int s=x%y;
		return s;
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int T= sc.nextInt();
		for (int i= 0;i< T;i++)
			{
      System.out.println("Enter Numerator");
			int x= sc.nextInt();
      System.out.println("Enter Denominator");
			int y= sc.nextInt();
			int k=cal(x,y);
			System.out.println("Remainder is :" + k);
		}
	}
}
