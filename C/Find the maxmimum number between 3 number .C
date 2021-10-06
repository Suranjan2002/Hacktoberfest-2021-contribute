#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 number\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b & a>c)
	printf("%d is greater",a);
	else if(b>a & b>c)
	printf("%d is greater",b);
	else if(c>a & c>b)
	printf("%d is greater",c);
	
	else
	printf("numbers are equal");
	return 0;

}
