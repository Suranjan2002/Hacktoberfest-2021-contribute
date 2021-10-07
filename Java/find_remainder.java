import java.util.*;

class Remainder
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int T,i;
		T= sc.nextInt();
		int N[][]= new int[T][2];
		for(i=0; i<T; i++){
		    N[i][0]= sc.nextInt();
		    N[i][1]= sc.nextInt();
		}
		i=0;
		while(i<T){
		    System.out.println(N[i][0] % N[i][1]);
		    i++;
		}
	}
}