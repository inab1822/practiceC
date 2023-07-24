#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 5������ ����̰� �ִ�
// �ƹ� Ű�� ������ �������� ����̸� �̵�, 
// 5���� ��� �� ������ �ؼ� ������ Ű��� �Ǵ� ����
// �ߺ��߻�����!

//�����
// �̸�, ����, ����, Ű��� ���̵� (����)

typedef struct
{
	char* name; // �̸�
	int age; // ����
	char* charactor; // ����
	int level; // Ű��� ���̵� (1 ~ 5, 5�� �����)
}CAT;

// ������� ������ �����
int collection[5] = { 0,0,0,0,0 };

// ��ü ����� ����Ʈ
CAT cats[5];

void initCats(); // ����� ���� �ʱ�ȭ
void printCat(int selected);
int checkCollection();

int main_struct_project(void)
{
	
	srand(time(NULL));

	initCats();

	while (1)
	{
		printf("�αٵα� ��� ������� ���簡 �ɱ��?\n�ƹ�Ű�� ������ Ȯ���ϼ���!");
		getchar();
		
		int selected = rand() % 5; // 0-4 ������ ���� ��ȯ
		printCat(selected); // ���� ����� ���� ���
		collection[selected] = 1; // ����� �̱� ó��

		int collectAll = checkCollection();
		if (collectAll == 1)
		{
			break;
		}
	}



	return 0;
}

void initCats()
{
	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].charactor = "�¼�";
	cats[0].level = 1;

	cats[1].name = "������";
	cats[1].age = 11;
	cats[1].charactor = "���";
	cats[1].level = 2;

	cats[2].name = "Ȳ����";
	cats[2].age = 2;
	cats[2].charactor = "����";
	cats[2].level = 3;

	cats[3].name = "�����";
	cats[3].age = 7;
	cats[3].charactor = "���";
	cats[3].level = 4;

	cats[4].name = "������";
	cats[4].age = 8;
	cats[4].charactor = "����";
	cats[4].level = 5;
}

void printCat(int selected)
{
	printf("\n\n=== ����� �� ������� ���簡 �Ǿ����! ===\n\n");
	printf(" �̸� : %s\n", cats[selected].name);
	printf(" ���� : %d\n", cats[selected].age);
	printf(" ���� : %s\n", cats[selected].charactor);
	printf(" ���� : ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "��");
	}
	printf("\n\n");
	
}

int checkCollection()
{
	// ���� ������ ����� ��ϵ� ���, �� ��Ҵ��� ���θ� ��ȯ
	int collectAll = 1;
	
	printf("\n\n === ������ ����� ����̿���. === \n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0) // ����� ���� X
		{
			printf("%10s", "(�� �ڽ�)");
			collectAll = 0; // �� ����� ���� ����

		}
		else // ����� ���� O
		{
			printf("%10s", cats[i].name);
		}

	}
	printf("\n===================================\n\n");

	if (collectAll)
	{
		printf("\n\n �����մϴ� ! ��� ����̸� �� ��Ҿ��. ������ Ű���ּ���\n\n");

	}

	return collectAll;
}