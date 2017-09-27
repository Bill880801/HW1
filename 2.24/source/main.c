#include<stdio.h>
#include<stdlib.h>

int main(void)

{
	int a,b;
	printf("Please enter one integer: ");
	scanf_s("%d",&a);
	b = a % 2;

	if (b == 1)
	{
		printf("\nYour integer is odd.\n");
	}

	if (b == 0)
	{
		printf("\nYour integer is even.\n");
	}

	system("pause");
	return 0;
}