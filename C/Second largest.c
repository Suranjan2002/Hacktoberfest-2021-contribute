#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(b>c)
            printf("2nd largest number is %d", b);
        else
            printf("2nd largest number is %d", c);
    }
    else if(b>c && b>a)
    {
        if(c>a)
            printf("2nd largest number is %d", c);
        else
            printf("2nd largest number is %d", a);
    }
    else if(a>b)
            printf("2nd largest number is %d", a);
        else
            printf("2nd largest number is %d", b);
}
