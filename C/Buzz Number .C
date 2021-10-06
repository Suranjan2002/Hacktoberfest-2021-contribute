#include<stdio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if (a%7==0 && a%10==7)
	printf("%d is a buzz number",a);
	else
	printf("%d is not a buzz number",a);
	return 0;
}
