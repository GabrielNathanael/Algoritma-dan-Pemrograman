#include <stdio.h>

int menu;
float side,width,height,base,radius,area;

int main()
{
	printf("List Menu :\n");
	printf("1.Calculate area of a squres\n");
	printf("2.Calculate area of a rectangle\n");
	printf("3.Calculate area of a triangle\n");
	printf("4.Calculate area of a circle \n\n");
	
	printf("Please select a menu item by input its number: ");
	scanf("%i",&menu);
	
	switch(menu)
	{
		case 1:
			{
				printf("Calculating the area of a square\n");
			
				break;
			}
		case 2:
			{
				printf("Calculating the area of a rectangle\n");
				printf("Input the width: ");
				scanf("%f",&width);
				printf("input the height: ");
				scanf("%f",&height);
				area =width*height;
				printf("The area of the rectangle is: %.2f ",area);
				break;
			}	
		case 3:
			{
				printf("Calculating the area of a triangle\n");
				printf("Input the base: ");
				scanf("%f",&base);
				printf("input the height: ");
				scanf("%f",&height);
				area =base*height/2;
				printf("The area of the triangle is : %.2f ",area);
				break;
			}
		case 4:
			{
				printf("Calculating the area of a circle\n");
				printf("Input the radius: ");
				scanf("%f",&radius);
				area =3.14*radius*radius;
				printf("The area of the circle is : %.2f ",area);
				break;
			}
		default:
			{
				printf("Sorry,you just inputed a wrong input");
			}
	}
	
	return 0;
}