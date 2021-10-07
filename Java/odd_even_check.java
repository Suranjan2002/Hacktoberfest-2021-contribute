import java.util.*;
class odd_even_check{
    public static void main(){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the number:");
        int number=sc.nextInt();
        String s=" ";
        if(number%2==0)
        {
            s="It is an even number";
        }
        else{
            s="It is an odd number";
        }
        System.out.println(s);
    }
}