/* C Program To Calculate Perimeter & Area Of Rectangle*/
#include<stdio.h>
int main()
{
	int length, breadth, perimeter, area;

	printf("Enter length and breadth: ");
	scanf("%d%d", &length, &breadth);
	
	area = length*breadth;
	perimeter = 2 * (length + breadth);
	
	printf("Area is : %d",area);
	printf("\nPerimeter is : %d",perimeter);
	
	if (area>perimeter)
		printf("\nArea is greater than perimeter");
	else if (area<perimeter)
		printf("Area is lesser than perimeter");
	else
		printf("Area and perimeter are equal");

	return 0;
}

