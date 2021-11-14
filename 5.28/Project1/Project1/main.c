#include<stdio.h>
#include<stdlib.h>

char function(char a);

int main()
{
	char f,k;
	printf("輸入一個英文字母:");
	scanf_s("%c", &f);
	k = function(f);
	printf("轉換後的字母: %c\n", k);
	system("pause");
	return 0;
}
char function(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		a = a + 32;
	}
	else if (a >= 'a' && a <= 'z')
	{
		a = a - 32; 
	}
	return a;
}