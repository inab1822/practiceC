#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// �Լ� ����================================================
int getRandomNumber(int level);                    // ���帶�� ���ο� ������ �����´�.
void showQuestion(int level, int num1, int num2);  // getRandomNumber�� ������ ������ ���� ���
void success();                                    // ������ ���߸� ����
void fail();                                       // ������ Ʋ���� ����
//==========================================================


int main_function_project(void)
{
	// ���� 5�����ִ�, �� ������ ���� ����� ���� ��� ����
	// ������ ��� Ʋ���� ����

	srand(time(NULL)); // ������ ���۵� ������ ���� �ʱ�ȭ

	int count = 0; // ���� ������ �ö󰡴� ī��Ʈ ��

	
	for (int i = 1; i <= 5; i++)    // �ݺ��� ����
	{
		// x * y �� ��
		int num1 = getRandomNumber(i); // getRandomNumber �Լ��� ������ ������ 
		int num2 = getRandomNumber(i); // num1 �� num2�� ����
		printf("%d x %d�� ���� �� �Դϱ�?", num1, num2); // ������ ����ϴ� printf
		showQuestion(i,num1,num2); // �ش� ������ ������ ���ڰ� ����� showQuestion �Լ�

		int answer = -1; // ���� ������ answer ����

		scanf_s("%d", &answer); // ������ �Է°��� answer�� ������.

		// �� answer�� �������� Ʋ���� �����ϰ� ������ if ������ �Ǵ�
		if (answer == -1)
		{
			printf("���α׷��� �����մϴ�.");
			//break; break�� �ش� for���� �����Ѵ�
			// ������ for�� ���� �� printf �Լ��� �����ϱ⶧����
			// exit(0); �Լ��� �ƿ� ���α׷��� �����Ű��
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			//����
			success();
			count++;
		}
		else
		{
			//����
			fail();
		}
	}

	printf("\n\n����� 5���� ��й�ȣ �� %d ���� �������ϴ�.\n\n", count);
	return 0;
}

// �Լ� ���� =====================================================================

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n####### %d ��° ��й�ȣ #######\n\n", level);
	printf("\t%d x %d ��?\t\n", num1, num2);
	printf("\n###################################\n");
	printf("��й�ȣ�� �Է��ϼ���.(���� : -1) >> ");

}

void success()
{
	printf("\n >> Good! �����Դϴ�.\n");
}
void fail()
{
	printf("\n >> No! Ʋ�Ƚ��ϴ�.\n");
}

// ============================================================================