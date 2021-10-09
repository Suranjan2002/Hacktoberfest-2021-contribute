import java.util.*;
class happy
{
    public static void main(String args[])
    {
        int s=0,n,r=0;
        Scanner SC=new Scanner(System.in);
        System.out.println("Enter the number:");
        n=SC.nextInt();
        int n1=n;
        while(n>9)
        {
            while(n>0)
            {
                r=n%10;
                s=s+r*r;
                n/=10;
            }
            n=s;
            s=0;
        }
        if(n==1)
        System.out.println("happy number:");
        else
        System.out.println("not a happy number:");
    }
}
