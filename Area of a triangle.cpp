//Area of a Triangle
#include<stdio.h>
int main()
{
	float base, height, area;
	printf("Enter the Base Value:");
	scanf_s("%f", &base);
	printf("Enter the Height Value:");
	scanf_s("%f", &height);
	area = 0.5 * base * height;
	printf("Area of The Triangle is %f", area);

}

