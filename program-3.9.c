#include<stdio.h>

//Write a Program to find Simple interest.
main()
{
	
	int p,r,t,ans;
	
	printf("Enter the value of initial principal balance: ");
	scanf("%d",&p);
	printf("Enter the value of annual interest rate: ");
	scanf("%d",&r);
	printf("Enter the value of time: ");
	scanf("%d",&t);
	
	ans=(p*r*t)/100;
	printf("The area of interest is :- %d",ans);
	
}
