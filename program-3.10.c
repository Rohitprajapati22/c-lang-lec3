#include<stdio.h>
#define PI 3.14
//Write a Program to find the Perimeter of the circle

main()
{
	
	float r,ans;
	printf("Enter the value of radius: ");
	scanf("%f",&r);
	
	ans=2*PI*r;
	printf("The Perimeter of the circle is :- %.2f",ans);
	
}
