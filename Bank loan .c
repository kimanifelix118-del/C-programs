#include<stdio.h>
//Bank program that determines if one is eligible for a loan
int main()
{
	
	int age;
	double income;

//prompting the user to enter age and annual income
printf("enter your age:");
scanf("%d", & age);
printf("enter you annual income in ksh:");
scanf("%lf", & income);

//checking whether age and income meet bank requirements
if (age >=21 && income>= 21000) {
printf("\n congratulations you qualify for a loan\n");
} else {
printf("\n unfortunately, we are unable to offer you a loan at this time\n");
}

return 0;
}
