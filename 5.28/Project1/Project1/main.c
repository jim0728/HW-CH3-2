#include<stdio.h>
#include<stdlib.h>

char function(char a);

int main()
{
	char f,k;
	printf("��J�@�ӭ^��r��:");
	scanf_s("%c", &f);
	k = function(f);
	printf("�ഫ�᪺�r��: %c\n", k);
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