import java.util.*;
class buzz
{
    public static void main(String args[])
    {
        int r,n,rev=0;
        Scanner SC=new Scanner(System.in);
        System.out.println("Enter the number:");
        n=SC.nextInt();
        while(n>0)
        {
            r=n%7;
            n=n/7;
            rev=rev*7+r;
        }
        if(n%7==0||n%10==7)
        System.out.println("buzz number:");
        else
        System.out.println("not a buzz number:");
    }
}
