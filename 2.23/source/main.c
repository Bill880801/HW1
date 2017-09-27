#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c,Max,Min;

	printf("Pleasw enter three integers: ");
	scanf_s("%d%d%d",&a,&b,&c);
	Max = 0;
	Min = 0;

	if (a >= b)
	{
		if (a >= c)
		{	
			Max = a;
		}
	}
	
	if (b >= a)
	{
		if (b >= c)
		{
			Max = b;
		}
	}


	if (c >= a)
	{
		if (c >= b)
		{
			Max = c;
		}
	}

	if (a <= b)
	{
		if (a <= c)
		{
			Min = a;
		}
	}

	if (b <= a)
	{
		if (b <= c)
		{
			Min = b;
		}
	}

	if (c <= a)
	{
		if (c <= b)
		{
			Min = c;
		}
	}

	printf("\nMax:%d  Min:%d\n\n",Max,Min);
	system("pause");
	return 0;
}