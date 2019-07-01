#define _CRT_SECURE_NO_WARNINGS 1

#if 0

程序名称：
属于哪个项目：
程序版本号：
程序开发小组组别：
程序算法提供人：
程序流程图提供人：
程序代码编写人：
程序测试员：
项目负责人：

#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <assert.h>

//这个函数是将光标位置移动到坐标x,y 
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
	/*这里是字符数组,用来存储从文件打开的字符串*/
	FILE *in;
	//getch(); 
	system("C:\\Users\\ASUS\\Desktop\\字符动画\\卡卡罗特VS布罗利.mp4");
	//printf("3\n");
	//Sleep(1000);

	//printf("2\n");
	//Sleep(1000);
	//printf("1\n");
	//Sleep(1000);
	//printf("0\n");
	Sleep(1000);
	printf("start/n");

	for (i = 1; i <= 15131; i++)//转换为文件后的个数
	{
		sprintf(FileName,
			"C:\\Users\\ASUS\\Desktop\\字符动画\\txtpicture\\(%ld).txt", i);

		in = fopen(FileName, "r"); 

		assert(in != NULL);
	
		fread(hi, 1, 67500, in);//改 ,这里是TXT文件里的字符串. 

		printf("%s\n%d", hi, i);
		gotoxy(1, 1);
		Sleep(25);//等待26毫秒执行    
		fclose(in);
	}
}    