#include <stdio.h>


// �Լ� �����ϰ� ��	�Ʒ� main �ۿ� 
// ������ �Լ��� ����
void p(int num);

void function_without_return();

int function_with_return();

void function_without_parms();

void function_with_parms(int num1, int num2, int num3);

int apple(int total, int ate);

int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div(int num, int num2);






int main_function(void)
{
	//function
	//����

	
	
	int num = 2;
	//printf("num �� %d �Դϴ�.\n", num); // 2
	p(num);

	// 2 + 3
	num = num + 3; // num += 3;
	//printf("num �� %d �Դϴ�.\n", num); // 5
	p(num);

	// 5 - 1
	num -= 1;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);

	// 4 x 3
	num *= 3;
	//printf("num �� %d �Դϴ�.\n", num);
	p(num);

	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	function_without_return();//���츣 ��Ŭ���� ���Ƿ� �̵��� ������ �ش� �Լ��� ���Ƿ� �̵�

	// ��ȯ���� �ִ� �Լ�
	// ������ ��ȯ���� �����ϱ� ������ ������ ���� int ret�� ������ ��
	// �ش� �Լ��� �־��ش�.
	int ret = function_with_return();
	p(ret);

	//�Ķ����(���ް�)�� ���� �Լ�
	function_without_parms();

	//�Ķ����(���ް�)�� �ִ� �Լ�
	function_with_parms(13,242,3234);

	//�Ķ����(���ް�)�� �ް� ��ȯ���� �ִ� �Լ�
	//int ret1 = apple(5, 2); // 5���� ����߿��� 2���� �Ծ����.
	//printf("5���߿� 2���� ������ %d���� ���ƿ�", ret1);
	printf("��� %d �� �߿� %d ���� ������ %d���� ���ƿ�\n", 10, 4, apple(10, 4));

	// ���� �Լ�
	num = 2;
	num = add(num,3); //num���ٰ� 3�� ���ϴ� �Լ�
	p(num);

	num = sub(num, 1);
	p(num);
	

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
}

// ����
void p(int num)
{
	printf("num �� %d �Դϴ�.\n", num);
}

//�Լ��� �����
// ��ȯ�� �Լ��̸�(���ް�) {}
// ��ȯ������ ��ȯ�Ǵ� ���� ������ ����
// int, double, float, char, 
// void(�ƹ��͵� ��ȯ���� �ʰڴٶ�� ��, �̶��� return�� �����ʴ´�.)
// ���ް� ���� ���޵Ǵ� ������ ���� int, double����� �ٴ´�.



void function_without_return()
{
	printf("��ȯ���� ���� �Լ� �Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ� �Դϴ�.\n");
	return 10;
}

void function_without_parms()
{
	printf("���ް��� ���� �Լ� �Դϴ�.\n");
}

void function_with_parms(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d,%d,%d �Դϴ�.\n"
		, num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.");
	return total - ate;
}

int add(int num, int num2)
{
	return num + num2;
}

int sub(int num, int num2)
{
	return num - num2;
}
int mul(int num, int num2)
{
	return num * num2;
}
int div(int num, int num2)
{
	return num / num2;
}