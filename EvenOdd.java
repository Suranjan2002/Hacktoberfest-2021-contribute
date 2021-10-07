import java.util.*;

class EvenOdd
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int T = sc.nextInt();
		int N[]= new int[T];
		for(int i=1; i<=T; i++){
		    N[i]= sc.nextInt();
		}
		for(int i=1; i<=T; i++){
		    if(N[i]%2==0){
		        System.out.println("EVEN NUMBER");
		    }
		    else{
		        System.out.println("ODD NUMBER");
		    }
		}
	}
}
