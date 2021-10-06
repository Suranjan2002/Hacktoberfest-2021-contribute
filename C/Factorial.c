#include<stdio.h>

int main()    
{
    int i,f,t,arr[20],j;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {scanf("%d",&arr[i]);}

     
    for(i=0;i<t;i++)
    {   
        f=1;
        for(j=1;j<=arr[i];j++)
            {    
                f=f*j;    
            }    
        printf("%d\n",f); 
    }   
return 0;  
} 