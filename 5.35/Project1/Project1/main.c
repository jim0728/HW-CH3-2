#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

unsigned long long int Fib(unsigned long long int n);

int main()
{
	unsigned long long  int  k   ;
	int n;

	printf("請輸入幾項n:");
	scanf_s("%d", &n);
	k = Fib(n);
	printf("數列在第48項時益位\n\n");
	printf("費氏數列第%d項為%llu\n", n , k);

}
unsigned long long int Fib(unsigned long long int n)
{
	unsigned int a, b, fib_current;

	a = 0;
	b = 1;
	for(int i = 2 ; i <= n ; i ++ )
	{
		fib_current = a + b;
		if (fib_current < a || fib_current < b)
		{
			printf("system overflow\n\n");
			break;
		}
		printf("%d\n", fib_current);
		a = b;
		b = fib_current;
	}
	return fib_current;
}