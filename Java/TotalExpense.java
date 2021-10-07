import java.util.*;
class Expenses
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int T= sc.nextInt();
		while(T-->0)
		{
		    double quantity = sc.nextDouble();
		    double price = sc.nextDouble();
		    double expenses = 0;
		    if(quantity>=1000)
			{
		        
		        expenses=(quantity * price)-(quantity*price*0.1);
		    }
		    else
			{
				expenses = quantity * price;
			}
		    
		    System.out.println(expenses);
		}
	}
}
