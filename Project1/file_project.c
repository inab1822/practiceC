#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��й�ȣ�� �Է� �޾Ƽ�
// �´� ��쿡�� ����ϱ⸦ �о�ͼ� �����ְ�, ��� �ۼ��ϵ��� �սô�.
// Ʋ�� ��� ? ��� �޽����� ǥ���ϰ� ����

#define MAX 10000

int main(void)
{
	// fgets, fputs Ȱ��
	char line[MAX]; // ���Ͽ��� �ҷ��� ������ ���� �� ����
	char contents[MAX]; // �ϱ��忡 �Է��� ����
	char password[20]; // ��й�ȣ �Է�
	char c; // ��й�ȣ �Է��� �� Ű�� Ȯ�ο�(����ŷ)

	printf("����ϱ⿡ ���� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ���. : ");

	// getchar(); / getch() �� ����?
	// getchar(); �� ���͸� �Է¹޾ƾ� ������ �մϴ�.
	// getch(); �� Ű �Է½� �ٷιٷ� ������ �մϴ�.

	int i = 0;
	while (1) 
	{
		c = getch();
		if (c == 13)// 13�� enter�� ��Ÿ���� �ƽ�Ű�ڵ� -> ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;



	}


	// ��й�ȣ : �����ڵ� skehzheld
	printf("\n\n == ��й�ȣ Ȯ�� ��... == \n\n");
	if (strcmp(password, "skehzheld") == 0) // ��й�ȣ�� ��ġ
	{
		printf(" === ��й�ȣ Ȯ�� �Ϸ� ===\n\n");
		char* fileName = "C:\\Users\\������\\source\\repos\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); // ������ ������ ������ �ϰ� ������ ������ append�� �Ѵ�.
		if (file == NULL)
		{
			printf("���Ͽ��� ����");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);

		}

		printf("\n\n ������ ��� �ۼ��ϼ��� ! �����Ͻ÷��� EXIT �� �Է��ϼ���.\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // �� ��(\n)�� ������ ������ �о���� (�� ���徿)
			getchar(); // Enter �Է� (\n) Flush ó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�.\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // Enter�� ������ ���� ó�� �Ͽ�������, ���Ƿ� �߰�

		}
		fclose(file);
	}
	else
	{
		printf(" === ��й�ȣ�� Ʋ�Ⱦ��. ===\n\n");
		printf(" ��!! ��� ������?!! ���� �� �ϱ����� !!!\n\n");
	}
	

	



	return 0;
}