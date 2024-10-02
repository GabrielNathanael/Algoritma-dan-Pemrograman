 d #include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdlib.h"

// 4 arguments
float Add(float a, float b)
{
	return a + b;
}
float Substract(float a, float b)
{
	return a - b;
}
float Multiplication(float a, float b)
{
	return a * b;
}
float Division(float a, float b)
{
	return a / b;
}

float Power(float a, float b)
{
	return pow(a,b);
}

float Root(float a, float b)
{
	return pow(a, 1/ b);
}

int Div(int a, int b)
{
	return a / b;
}

int Mod(int a, int b)
{
	return a % b;
}


// convert degree to radian
float degToRad(float deg)
{
	return (deg * M_PI / 180);
}

// 3 arguments
float Sin(float a)
{
	return sin(degToRad(a));
}

float Cos(float a)
{
	return cos(degToRad(a));
}
float Tan(float a)
{
	return tan(degToRad(a));
}
float Log(float a)
{
	return log10(a);
}
float Ln(float a)
{
	return log(a);
}

int Factorial(int a)
{
	if (a == 0 || a == 1)
	{
		return 1;
	}
	else
	{
		return a * Factorial(a - 1);
	}
}

int main(int argc, char **argv)
{

	float a, b;

	if (argc == 4)
	{
		a = atof(argv[1]);
		b = atof(argv[3]);

		if (strcmp(argv[2], "+") == 0)
		{
			printf("%0.2f + %0.2f = %0.2f",a,b,Add(a,b));
		}
		else if (strcmp(argv[2], "-") == 0)
		{
			printf("%0.2f - %0.2f = %0.2f",a,b,Substract(a,b));
		}
		else if (strcmp(argv[2], "x") == 0)
		{
			printf("%0.2f x %0.2f = %0.2f",a,b,Multiplication(a,b));
		}
		else if (strcmp(argv[2], "/") == 0)
		{
			printf("%0.2f / %0.2f = %0.2f",a,b,Division(a,b));
		}
		else if (strcmp(argv[2], "power") == 0)
		{
			printf("%0.2f power %0.2f = %0.2f",a,b,Power(a,b));
		}
		else if (strcmp(argv[2], "root") == 0)
		{
			printf("%0.2f root %0.2f = %0.2f",a,b,Root(a,b));
		}
		else if (strcmp(argv[2], "div") == 0)
		{
			printf("%0.2f / %0.2f = %i",a,b,Div(a,b));
		}
		else if (strcmp(argv[2], "mod") == 0)
		{
			printf("%0.2f mod %0.2f = %i",a,b,Mod(a,b));
		}
		else
		{
			printf("Invalid operation");
		}
	}
	if (argc == 3)
	{
		a = atof(argv[2]);

		if (strcmp(argv[1], "sin") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Sin(a));
		}
		else if (strcmp(argv[1], "cos") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Cos(a));
		}
		else if (strcmp(argv[1], "tan") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Tan(a));
		}
		else if (strcmp(argv[1], "log") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Log(a));
		}
		else if (strcmp(argv[1], "ln") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Ln(a));
		}
		else if (strcmp(argv[1], "factorial") == 0)
		{
			printf("%s %.f = %i", argv[1], a, Factorial(a));
		}
		else
		{
			printf("Invalid Operation");
		}
	}

	return 0;
}