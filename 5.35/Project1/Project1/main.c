#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

unsigned long long int Fib(unsigned long long int n);

int main()
{
	unsigned long long  int  k   ;
	int n;

	printf("�п�J�X��n:");
	scanf_s("%d", &n);
	k = Fib(n);
	printf("�ƦC�b��48���ɯq��\n\n");
	printf("�O��ƦC��%d����%llu\n", n , k);

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