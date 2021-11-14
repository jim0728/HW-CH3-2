#include<stdio.h>
#include<stdlib.h>

 void TOH(int n, char x, char y, char z)
{
	if (n > 0)
	{
		TOH(n - 1, x, y, z);
		printf("Move from %c to %c \n", x, y);
		TOH(n - 1, z, y, x);
	}
}
 int main()
 {
	 int n = 64;
	 TOH(n, 'A', 'B', 'C');
	 return 0;
 }