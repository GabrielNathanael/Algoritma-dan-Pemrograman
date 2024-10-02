#include <stdio.h>

int menuItem;
float side,width,height,area

int main ()
{
	printf("Menu: \n");
	prinff("1.Compute Square area. \n");
	printf("2.Compute Rectangle Area.\n");
	printf("3.Compute Triangle Area. \n");
	printf("4.Compute Circle Area.\n\n" );
	printf("please select a menu item by its number: ");
	scanf("xi",&menuItem);
	if (menuItem == 1)
	{
		printf("Computing area of s square: \n");
		printf("Please insert the lenght of the side: ");
		scanf("%f",&side);
		area= side*side;
		printf("Area of the square = %.2f",area);
	}
	else if (menuItem == 2);
	{
		printf("Computing area of a rectangle: \n");
		printf("Please insert the width of the side: ");
		scanf("%f",&width);
		printf("Please insert the height of the side: ");
		scanf("%f",&height);
		area = width*height;
		printf("Area of the rectangle = %.2f",area);
	}
	else if (menuItem == 3);
	{
		printf("Computing area of a triangle: \n");
		printf("Please insert the base  of the triangle: ");
		scanf("%f",&width);
		printf("Please insert the height of the triangle: ");
		scanf("%f",&height);
		area = width*height/2;
		printf("Area of the triangle = %i.2f",area);
	}
	else if (menuItem == 4);
	{
		printf("Computing area of a cicle: \n");
		printf("Please insert the radius of the circle: ");
		scanf("%f",&width);
		area = 3.14*width*width;
		printf("Area of the circle =%i.2f",area);
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}