#include <stdio.h>

int main_condition(void)
{/*
	int age = 30;
	if (age >= 20)
	{
		printf("�Ϲ��� �Դϴ�.\n");
	}
	else
	{
		printf("�л��Դϴ�.\n");
	}*/
	/*int age = 18;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age > 13 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age > 16 && age <= 19)
	{
		printf("����л��Դϴ�.\n");
	}*/

	/*for (int i = 1; i <= 26; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ����������\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ�� �غ��ϼ���\n", i);
	}*/

	//1�� ���� 30 ���л����� ��ǥ 7���� ���ļ� �Ἦ
	//7���� �����ϰ� 6������ 10������ ��ǥ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
		}
	}*/

	// ����, ����, ��
	//srand(time(NULL));
	//int i = rand() % 3;
	////printf("%d",i);
	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");	
	//}
	//else if (i = 2)
	//{
	//	printf("��\n");
	//}

	//srand(time(NULL));
	//int i = rand() % 3;
	//printf("%d", i);
	//switch (i)
	//{
	//case 0: printf("����\n"); break;
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default: printf("�����.\n"); break;
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
		case 13: printf("�ʵ��л��Դϴ�.\n"); break;
		case 14: 
		case 15: 
		case 16: printf("���л��Դϴ�.\n"); break;
		case 17: 
		case 18: 
		case 19: printf("����л��Դϴ�.\n"); break;
		default:
			break;
		}
	}

	return 0;

}