#include <stdio.h>

int main_condition(void)
{/*
	int age = 30;
	if (age >= 20)
	{
		printf("일반인 입니다.\n");
	}
	else
	{
		printf("학생입니다.\n");
	}*/
	/*int age = 18;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age > 13 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age > 16 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}*/

	/*for (int i = 1; i <= 26; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에가세요\n");
			break;
		}
		printf("%d 번 학생은 조별 발표를 준비하세요\n", i);
	}*/

	//1번 부터 30 번학생까지 발표 7번은 아파서 결석
	//7번을 제외하고 6번부터 10번까지 발표
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표를 준비하세요.\n", i);
		}
	}*/

	// 가위, 바위, 보
	//srand(time(NULL));
	//int i = rand() % 3;
	////printf("%d",i);
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");	
	//}
	//else if (i = 2)
	//{
	//	printf("보\n");
	//}

	//srand(time(NULL));
	//int i = rand() % 3;
	//printf("%d", i);
	//switch (i)
	//{
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요.\n"); break;
	//}

	for (int i = 8; i < 20; i++)
	{
		switch (i)
		{
		case 8: 
		case 9: 
		case 10:
		case 11:
		case 12:
		case 13: printf("초등학생입니다.\n"); break;
		case 14: 
		case 15: 
		case 16: printf("중학생입니다.\n"); break;
		case 17: 
		case 18: 
		case 19: printf("고등학생입니다.\n"); break;
		default:
			break;
		}
	}

	return 0;

}