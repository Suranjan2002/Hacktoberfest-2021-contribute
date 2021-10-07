#include<stdio.h>
void main()
{
	float length,breadth,perimeter,area;
	printf("Enter length of rectangle :: ");
	scanf("%f",&length);
    printf("Enter breadth of rectangle :: ");
    scanf("%f",&breadth);
	if(length<=0||breadth<=0)
		printf("The lendth and breadth of rectangle can not be less than or equal to zero\n");
	else
	{
        perimeter=(length+breadth)*2;
        area=length*breadth;
        if(perimeter>area)
            printf("Peri\n%f",perimeter);
        else if(perimeter==area)
            printf("Eq\n%f",area);
        else
            printf("Area\n%f",area);
    }	
}
