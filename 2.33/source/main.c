#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e, f, g, h;
	printf("�C�Ѧ�p���{(����): ");
	scanf_s("%f",&a);
	printf("\n�C���ɨT�o������(��): ");
	scanf_s("%f", &b);
	printf("\n�C���ɨT�o��p���{��(����): ");
	scanf_s("%f", &c);
	printf("\n�C�Ѫ������O(��): ");
	scanf_s("%f", &d);
	printf("\n�C�Ѫ��L���O(��): ");
	scanf_s("%f", &e);
	g = a / c * b + d + e ;
	printf("\n�z�C�Ѷ}���W�Z���O�ά�%.2f��\n",g);
	printf("\n�@��������(��): ");
	scanf_s("%f", &f);
	h = a / c * b + d + e - f;
	if (h >= 0)
	{
		printf("\n�@�����z�٤U%.2f��������\n\n", h);
	}
	else
	{
		h *= -1;
		printf("\n�@�����z�h��%.2f��������\n\n", h);
	}
	system("pause");
	return 0;
}