#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define N 30
#define M 42

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "rus");
	char str[N];
	char str1[N];
	char hello[M] = "Hello ";
	char hello1[M] = "Привет, ";
	printf("Enter your name: ");
	scanf("%s", str);

	for (int i = 0; i < N; i++)
	{
		str1[i] = toupper(str[i]);
	}

	strcat(hello, str1);

	for (int i = strlen(hello); i < M - 2; i++)
	{
		hello[i] = '!';
	}

	hello[40] = '\0';

	for (int i = 0; i < strlen(hello); i++)
	{
		printf("%c", hello[i]);
	}

	printf("\n");

	strcat(hello1, str);
	hello1[strlen(hello1)] = '!';

	for (int i = 0; i < strlen(hello1); i++)
	{
		if (hello1[i] == 'a' || hello1[i] == 'A' || hello1[i] == 'а' || hello1[i] == 'А') hello1[i] = '@';
	}

	for (int i = 0; i < strlen(hello1); i++)
	{
		printf("%c", hello1[i]);
	}
}
