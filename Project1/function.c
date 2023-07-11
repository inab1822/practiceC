#include <stdio.h>


// 함수 선언하고 맨	아래 main 밖에 
// 선언한 함수를 정의
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
	//계산기

	
	
	int num = 2;
	//printf("num 은 %d 입니다.\n", num); // 2
	p(num);

	// 2 + 3
	num = num + 3; // num += 3;
	//printf("num 은 %d 입니다.\n", num); // 5
	p(num);

	// 5 - 1
	num -= 1;
	//printf("num 은 %d 입니다.\n", num);
	p(num);

	// 4 x 3
	num *= 3;
	//printf("num 은 %d 입니다.\n", num);
	p(num);

	// 함수 종류
	// 반환값이 없는 함수
	function_without_return();//마우르 우클릭후 정의로 이동을 누르면 해당 함수의 정의로 이동

	// 반환값이 있는 함수
	// 정수형 반환값이 존재하기 때문에 정수형 변수 int ret을 선언한 후
	// 해당 함수를 넣어준다.
	int ret = function_with_return();
	p(ret);

	//파라미터(전달값)이 없는 함수
	function_without_parms();

	//파라미터(전달값)이 있는 함수
	function_with_parms(13,242,3234);

	//파라미터(전달값)도 받고 반환값도 있는 함수
	//int ret1 = apple(5, 2); // 5개의 사과중에서 2개를 먹었어요.
	//printf("5개중에 2개를 먹으면 %d개가 남아요", ret1);
	printf("사과 %d 개 중에 %d 개를 먹으면 %d개가 남아요\n", 10, 4, apple(10, 4));

	// 계산기 함수
	num = 2;
	num = add(num,3); //num에다가 3을 더하는 함수
	p(num);

	num = sub(num, 1);
	p(num);
	

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
}

// 정의
void p(int num)
{
	printf("num 은 %d 입니다.\n", num);
}

//함수의 생김새
// 반환형 함수이름(전달값) {}
// 반환형에는 반환되는 값의 종류에 따라
// int, double, float, char, 
// void(아무것도 반환하지 않겠다라는 뜻, 이땐느 return을 하지않는다.)
// 전달값 또한 전달되는 종류의 따라 int, double등등이 붙는다.



void function_without_return()
{
	printf("반환값이 없는 함수 입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수 입니다.\n");
	return 10;
}

void function_without_parms()
{
	printf("전달값이 없는 함수 입니다.\n");
}

void function_with_parms(int num1, int num2, int num3)
{
	printf("절달값이 있는 함수이며, 전달받은 값은 %d,%d,%d 입니다.\n"
		, num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.");
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