#include<stdio.h>
#include<stdlib.h>

double power(double b, double e);

int main(void)
{
	int   b, e;
	printf("輸入底數:\n ");
	printf("輸入次方:\n");
	scanf_s("%d %d", &b, &e);
	printf("結果為:%f", power(b,e));

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