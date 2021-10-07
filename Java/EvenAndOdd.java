

import java.util.Scanner;
  
class EvenAndOdd {
  
  
    public static void main(String[] args)
    {
        Scanner q = new Scanner(System.in);
        int n=q.nextInt();
        for(int i=0;i<n;i++)
        {
        int num =q.nextInt();
  
        if (num % 2 == 0) {
  
            System.out.println("Even");
        }
        else {

            System.out.println("Odd");
        }
        }
    }
}