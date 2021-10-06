#include<stdio.h>
int main()
{
	int a;
	printf("enter a year");
	scanf("%d",&a);
	if (a%100==0 && a%400==0)
	printf("it is a leapyear");
	else if(a%100!=0 && a%4==0)
	printf("it is a leapyear");
	else
	printf("it is not a leapyear");
	return 0;

}
