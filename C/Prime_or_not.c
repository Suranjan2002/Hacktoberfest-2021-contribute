#include<stdio.h>
void main()
{
    int i,j,T,N,count=0;
    printf("Enter the number of test cases :: ");
    scanf("%d",&T);
    printf("Enter integers :: ");
    for(j=0;j<=T;j++)
    {
        scanf("%d",&N);
        if(N>1)
        {
            for(i=1;i<=N;i++)
            {
                if(N%i==0)
                    count++;
            }
        }
        else if(N==0||N==1||N==-1)
        {
            printf("Not prime\t");
            return;
        }
        else 
        {
            for(i=-1;i>=N;i--)
            {
                if(N%i==0)
                    count++;
            }
        }
        if(count==2)
            printf("Prime\t");
        else
            printf("Not prime\t");
    }
}
