#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *a, *b;
	int ch;
	a = fopen("D://Lessons/北科大/高階語言程式實習/HW/HW7/107360237_廖祐晟/welcome.txt", "r");
	b = fopen("D://Lessons/北科大/高階語言程式實習/HW/HW7/107360237_廖祐晟/output.txt", "w");
	if (a != NULL && b != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{
			putc(ch, b);

		}
		printf("檔案傳送成功\n");
		fclose(a);
		fclose(b);
	}
	else
	{
		printf("檔案開啟失敗\n");
	}
	system("pause");
}
