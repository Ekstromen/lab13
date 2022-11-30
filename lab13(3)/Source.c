#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define N 30

void delchar(char* str, int pos);

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "rus");
	char str[N];
	printf("Введите строку:\n");
	gets(str);
	str[strlen(str)] = '\0';

	for (int i = 0; i < strlen(str); i++)
	{
		while (str[i] == ' ' && str[i+1] == ' ') delchar(str, i);
	}

	for (int i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}

}

void delchar(char* str, int pos)
{
	int i;
	for (i = pos; i < strlen(str); ++i) 
	{
		str[i] = str[i + 1];
	}
		
}
