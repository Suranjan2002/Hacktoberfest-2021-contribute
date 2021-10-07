#include<stdio.h>
void main()
{
    int i,j,N,n,T,sum=0;
    printf("Enter number of test cases :: ");
    scanf("%d",&T);
    printf("Enter the integers :: ");
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        n=N;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        if(N%sum==0)
            printf("Niven number\t");
        else
            printf("Not a niven number\t");
    }
}
