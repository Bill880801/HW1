#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("Please enter two integers:");
	scanf_s("%d%d",&a,&b);
	c = a % b;
	
	if (c == 0)
	{
		printf("\nThe first number is a multiple of the second number.\n");
	}
	else
	{
		printf("\nThe first number is not a multiple of the second number.\n");
	}
		
	system("pause");
	return 0;
}
