#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *a, *b;
	int ch;
	a = fopen("D://Lessons/�_��j/�����y���{�����/HW/HW7/107360237_������/welcome.txt", "r");
	b = fopen("D://Lessons/�_��j/�����y���{�����/HW/HW7/107360237_������/output.txt", "w");
	if (a != NULL && b != NULL)
	{
		while ((ch = getc(a)) != EOF)
		{
			putc(ch, b);

		}
		printf("�ɮ׶ǰe���\\n");
		fclose(a);
		fclose(b);
	}
	else
	{
		printf("�ɮ׶}�ҥ���\n");
	}
	system("pause");
}
