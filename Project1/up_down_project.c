#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main_project1(void)
{
	srand(time(NULL));
	int num = rand() % 100+1; // 0 ~ 99 ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (1)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���� ������ (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ��\n");
		}
		else if (answer < num)
		{
			printf("UP ��\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��.\n\n");
		}

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� ����\n");
			break;
		}
	}
	
}