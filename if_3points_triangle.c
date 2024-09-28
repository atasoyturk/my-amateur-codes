#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, x3, y1, y2, y3;
	
	printf("Enter a x and y values for a point 1 (x,y): ");
	scanf ("%d %d", &x1, &y1);
	
	printf("Enter a x and y values for a point 2 (x,y): ");
	scanf ("%d %d", &x2, &y2);
	
	printf("Enter a x and y values for a point 3 (x,y): ");
	scanf ("%d %d", &x3, &y3);
	
	if(sqrt(pow(x2-x1,2)+pow(y2-y1,2)) + sqrt(pow(x3-x1,2)+pow(y3-y1,2))>sqrt(pow(x3-x2,2)+pow(y3-y2,2))&&sqrt(pow(x2-x1,2)+pow(y2-y1,2)) + sqrt(pow(x3-x2,2)+pow(y3-y2,2))>sqrt(pow(x3-x1,2)+pow(y3-y1,2))&&sqrt(pow(x3-x1,2)+pow(y3-y1,2)) + sqrt(pow(x3-x2,2)+pow(y3-y2,2))>sqrt(pow(x2-x1,2)+pow(y2-y1,2))){
		printf("This three points provide a triangle.");
	}else{
		printf("This three points does not provide a triangle.");
	}
	
	return 0;
}