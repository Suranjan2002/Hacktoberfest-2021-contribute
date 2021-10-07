#include<stdio.h>
#include<math.h>
void main()
{
    int i,T,N;
    float res;
    printf("Enter the number of test cases :: ");
    scanf("%d",&T);
    printf("Enter integers :: ");
    for(i=0;i<=T;i++)
    {
        scanf("%d",&N);
        res=sqrt(N);
        printf("%f\t",res);
    }
}
