#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	char q[80];
	int i;
	a = fopen("D://Lessons/北科大/高階語言程式實習/HW/HW7/107360237_廖祐晟/output.txt", "r");
	if (a == NULL)
	{
		printf("檔案開啟失敗\n");
	}
	else
	{
		i = fread(q, sizeof(char), 79, a);
		q[i] = '\0';
		printf("%s\n", q);
	}
	fclose(a);
	system("pause");
}