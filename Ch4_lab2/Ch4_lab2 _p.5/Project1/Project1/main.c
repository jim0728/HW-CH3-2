#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char array[5];
	printf("arry = %p\n&arry[0]=%p\n&arry = %p\n",
		array, &array[0], &array);
	system("pause");
	return 0;

}