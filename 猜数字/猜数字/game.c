#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
    printf("***********************************\n");
	printf("******1、play       0、exit********\n");
	printf("***********************************\n");
}
void game()
{
	int j = 0;
    int i = 0;
	printf("猜数字\n");
	i = rand()%100;
	while(1)
	{
		scanf("%d",&j);
	   if(j < i)
		   printf("猜小了\n");
	   else if(j > i)
		   printf("猜大了\n");
	   else
	   {
	   printf("恭喜你，猜对了！！！\n");
	   printf("***********************  %d",i);
	   break;
	   }
	
	}
}
int main()
{   
	int n = 1;
	srand((unsigned int) time(NULL));
    menu();	
	printf("请选择>:");
	while(n)
	{
	scanf("%d",&n);
	switch(n)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default :
				printf("输入错误，请重新输入\n");
				break;
	     }
	}
	return 0;
}