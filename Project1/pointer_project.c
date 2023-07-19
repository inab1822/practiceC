#include <stdio.h>
#include <time.h>

// �����Ⱑ 6���� ��� �ִ�.
// �̵��� ���׿� ����ִµ� �縷�� �ִ�.
// �縷�� �ʹ� ������ �ʹ� �����ؼ� ���� ���� ���� �����Ѵ�.
// ���̴� �����ϱ� ���� �������� ���׿� ���� �༭ �������� ����ּ���.
// ������� �ð��� �������� ���� Ŀ����... ���߿���..�ȳ�

int level;
int arrayFish[6];
int * cursor;

void initData();
void printFishes();
void decreaseWater(long elapesdTime);
int checkFishAlive();


int main(void)
{
	long startTime = 0; // ���� ���۽ð�
	long totalElapsedTime = 0; // �� ����ð�
	long prevElapsedTime = 0; // ���� ����ð�(�ֱٿ� ���� �� �ð� ����)

	int num; // �� �� ���׿� ���� �ٰ�����.
	initData();

	cursor = arrayFish; // cursor[0]...cursor[1]...

	startTime = clock(); // ����ð��� millisecond (1000����1��) ������ ��ȯ
	while (1)
	{
		printFishes();
		//getchar(); // �ӽ÷� ����� �Է� ���
		printf("�� �� ���׿� ���� �ֽðھ��?");
		scanf_s("%d", &num);

		// �Է°� üũ
		if (num < 1 || num >6)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�.");
			continue;
		}

		// �� ����ð�
		// CLOCKS_PER_SEC �� �и�������� ������ �ð��� �� ������ �ٲٱ������̴�.
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���� �� �� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		// ������ ���� ���� (����)
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ������ ���� �ش�.
		// 1. ������ ���� 0�̸�? ���� ���� �ʴ´�...�̹� �����Ⱑ..�׾...
		if (cursor[num-1]<=0)
		{	
			printf("%d�� ������� �̹� �׾����ϴ�....���� ���� �ʽ��ϴ�.\n",num);

		}
		// 2. ������ ���� 0�� �ƴ� ���? ���� �ش�!	 100�� ���� �ʴ��� üũ
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d�� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}

		// �������� �Ұ��� Ȯ�� (�������� 20�� ���� �ѹ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			// ������
			level++; // level : 1 -> level : 2
			printf(" ***�� ������ ! ���� %d �������� %d ������ ���׷��̵�***\n\n", level - 1, level);

			// ���� ���� : 5
			if (level == 5)
			{
				printf("\n\n�����մϴ�! �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
				
		}

		// ��� �����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			// �����Ⱑ ��� �׾���.
			printf("��� �����Ⱑ �׾����ϴ� �̤�...\n");
			exit(0);
		}
		else
		{
			// �ּ� �Ѹ��� �̻��� ������� ��Ҵ�.	
			printf("�����Ⱑ ���� ����־��!\n");
		}

		prevElapsedTime = totalElapsedTime;

		// 

	}

	return 0;
}

void initData()
{
	level = 1; // ���� ���� 1~5
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ������ �� ���� (0 ~ 100)
	}
}

void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapesdTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapesdTime); // 3 : ���̵� ������ ���� ��
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1; //�� True
		}
		return 0;
	}
}