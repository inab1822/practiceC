#include <stdio.h>

int main(void)
{
	//// �迭
	//int subway_1 = 30; // ����ö 1ȣ������ 30���� Ÿ���ִ�.
	//int subway_2 = 40; // ����ö 2ȣ������ 40���� Ÿ���ִ�.
	//int subway_3 = 50;


	//printf("����ö 1ȣ������ %d ���� Ÿ���ֽ��ϴ�.\n", subway_1);
	//printf("����ö 2ȣ������ %d ���� Ÿ���ֽ��ϴ�.\n", subway_2);
	//printf("����ö 3ȣ������ %d ���� Ÿ���ֽ��ϴ�.\n", subway_3);

	// �������� ������ �Բ�, ���ÿ� ����
	int subway_array[3]; // 3���� ���� ���ϴ� �迭 ����
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	printf("%a",subway_array);
	return 0;
}