#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, BMI;

	printf("Please enter your weight(kg):");
	scanf_s("%f", &a);
	printf("Please enter your height(m):");
	scanf_s("%f", &b);

	BMI = a / (b*b);
	printf("Your BMI is %f\n\n", BMI);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}