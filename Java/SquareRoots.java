import java.util.*;
class square 
{	
	static int find(int n) 
	{
		int r=(int)Math.ceil(Math.sqrt(n));
		while((r*r)>n) 
		{
			r--;
		}
		return r;
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		int i=0;
		while(i<T)
		{
			int n= sc.nextInt();
			System.out.println(find(n));
			i++;
		}
	}
}
