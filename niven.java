import java.util.*;
class niven
{
    public static void main(String args[])
    {
        int cop,s=0;
        Scanner SC=new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=SC.nextInt();
        cop=n;
        while(cop>0)
        {
            int d=cop%10;
            s=-s+d;
            cop=cop/10;
        }
        if(n%s==0)
        System.out.println("niven number:");
        else
        System.out.println("not a niven number:");
    }
}
