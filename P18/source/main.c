#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *a;
	FILE *b;
	char q[80];
	int c;
	a = fopen("D://Lessons/北科大/高階語言程式實習/HW/HW7/107360237_廖祐晟/welcome.txt", "r");
	b = fopen("D://Lessons/北科大/高階語言程式實習/HW/HW7/107360237_廖祐晟/output.txt", "w");

	if (a == NULL || b == NULL)
	{
		printf("檔案開啟失敗\n");
	}
	else
	{
		while (!feof(a))
		{
			c = fscanf(a, "%s", q);
			if (c > 0)
			{
				fprintf(b, "%s\n", q);
			}
		}
		printf("檔案傳送成功\n");
		fclose(a);
		fclose(b);
	}
	system("pause");
}