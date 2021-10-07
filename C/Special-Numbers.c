#include<stdio.h>
 
int isSpecial(int arg) 
{
    int sum = 0, temp, count, fact;
    temp = arg;
    while(temp != 0)
    {
        fact = 1;
        for(count = 1; count <= temp%10; count++)
        {
            fact = fact * count;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if (sum == arg) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
 
int main()
{
    int num, result;
    printf("\nEnter a Number:\t");
    scanf("%d", &num);
    result = isSpecial(num);
    if(result == 1)
    {
        printf("\n Special Number \n", num);
    }
    else
    {
        printf("\n Not a Special Number\n\n", num);
    }
    return 0;
}
