#include<stdio.h>
#include<stdlib.h>

double power(double b, double e);

int main(void)
{
	int   b, e;
	printf("��J����:\n ");
	printf("��J����:\n");
	scanf_s("%d %d", &b, &e);
	printf("���G��:%f", power(b,e));

}
double power(double b, double e)
{
	double c=b,k;
	for (int i = 1; i < e; i++)
	{
		k = b;
		c = c * k;
	}
	return c;


}