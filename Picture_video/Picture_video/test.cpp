#define _CRT_SECURE_NO_WARNINGS 1

#if 0

�������ƣ�
�����ĸ���Ŀ��
����汾�ţ�
���򿪷�С�����
�����㷨�ṩ�ˣ�
��������ͼ�ṩ�ˣ�
��������д�ˣ�
�������Ա��
��Ŀ�����ˣ�

#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <assert.h>

//��������ǽ����λ���ƶ�������x,y 
void gotoxy(int x, int y)
{
	COORD pos; pos.X = x - 1; pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{

	system("color f0");
	long i;
	char FileName[100];
	char hi[67500];
	/*�������ַ�����,�����洢���ļ��򿪵��ַ���*/
	FILE *in;
	//getch(); 
	system("C:\\Users\\ASUS\\Desktop\\�ַ�����\\��������VS������.mp4");
	//printf("3\n");
	//Sleep(1000);

	//printf("2\n");
	//Sleep(1000);
	//printf("1\n");
	//Sleep(1000);
	//printf("0\n");
	Sleep(1000);
	printf("start/n");

	for (i = 1; i <= 15131; i++)//ת��Ϊ�ļ���ĸ���
	{
		sprintf(FileName,
			"C:\\Users\\ASUS\\Desktop\\�ַ�����\\txtpicture\\(%ld).txt", i);

		in = fopen(FileName, "r"); 

		assert(in != NULL);
	
		fread(hi, 1, 67500, in);//�� ,������TXT�ļ�����ַ���. 

		printf("%s\n%d", hi, i);
		gotoxy(1, 1);
		Sleep(25);//�ȴ�26����ִ��    
		fclose(in);
	}
}    