#include<stdio.h>
#include<stdlib.h>

int lcm(int a, int b);
int gcd(int a, int b);
int main(void)
{
	int a, b, L;
	printf("輸入兩數字:");
	scanf_s("%d %d", &a, &b);
	L = lcm(a, b);

	printf("最小公倍數%d", L);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;

}