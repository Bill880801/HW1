#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e, f, g, h;
	printf("每天行駛里程(公里): ");
	scanf_s("%f",&a);
	printf("\n每公升汽油的價格(元): ");
	scanf_s("%f", &b);
	printf("\n每公升汽油行駛里程數(公里): ");
	scanf_s("%f", &c);
	printf("\n每天的停車費(元): ");
	scanf_s("%f", &d);
	printf("\n每天的過路費(元): ");
	scanf_s("%f", &e);
	g = a / c * b + d + e ;
	printf("\n您每天開車上班的費用為%.2f元\n",g);
	printf("\n共乘的價格(元): ");
	scanf_s("%f", &f);
	h = a / c * b + d + e - f;
	if (h >= 0)
	{
		printf("\n共乘讓您省下%.2f元的車資\n\n", h);
	}
	else
	{
		h *= -1;
		printf("\n共乘讓您多花%.2f元的車資\n\n", h);
	}
	system("pause");
	return 0;
}