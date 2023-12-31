#include <stdio.h>

int main_array(void)
{
	//// 배열
	//int subway_1 = 30; // 지하철 1호선에는 30명이 타고있다.
	//int subway_2 = 40; // 지하철 2호선에는 40명이 타고있다.
	//int subway_3 = 50;


	//printf("지하철 1호차에는 %d 명이 타고있습니다.\n", subway_1);
	//printf("지하철 2호차에는 %d 명이 타고있습니다.\n", subway_2);
	//printf("지하철 3호차에는 %d 명이 타고있습니다.\n", subway_3);

	// 여러개의 변수를 함께, 동시에 생성
	//int subway_array[3]; // 3개의 값을 지니는 배열 생성
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에는 %d 명이 타고있습니다.\n", i+1,subway_array[i]);
	//}

	// 값 설정 방법
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 값은 반드시 초기화를 해야한다
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 배열의 크기는 변수가 아닌 상수를 적어줘야 한다.
	/*int size = 10;
	int arr[size];*/

	//int arr[10] = { 1,2 }; // 3번째 값 부터는 자동으로 0으로 초기화
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[] = { 1,2 }; // int arr[2] 와 같음

	/*float arr_f[5] = { 1.0f,2.0f,3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	*/

	// 문자 vs 문자열
	/*char c = 'A';
	printf("%c", c);*/

	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함
	// 안그러면 출력시 coding 뒤에 이상한 문자가 같이 출력된다.
	//char str[6] = "coding"; // [c][o][d][i][n][g][\0]

	/*char str[7] = "coding";
	printf("%s\n", str);*/

	//char str[] = "coding";
	////printf("%s\n", str);
	////printf("%d\n", sizeof(str)); // sizeof()는 해당 배열의 크기

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "나도코딩";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor)); // 실행하면 kor의 크기가 9라고 나옴
	//// 영어 한글자 : 1 byte
	//// 한글 한글자 : 2 byte
	//// char 크기 : 1 byte
	//

	//char c_array[7] = { 'c','o','d','i','n','g','\0'}; // 제대로 출력됨
	//char c_array[6] = { 'c','o','d','i','n','g'}; // '\0' 이 들어갈 자리가 없어서 이상한 값이 출력
	//printf("%s\n", c_array);
	//

	//char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}*/

	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%d\n", c_array[i]); // ASCII 코드 값 (null 문자는 0으로 입력됨)
	//}

	// 문자열 입력받기
	/*char name[256];
	
	printf("이름을 입력하세요. : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s", name);*/

	
	// 참고 : ASCII 코드? ANSI(미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit, 총 128개 코드 (0 ~ 127)
	// a : 97 (문자 a의 아스키코드 정수값)
	// A : 65
	// 0 : 48
	
	/*printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%d\n", 'b');
	printf("%d\n", 'b');

	printf("%d\n", 'A');
	printf("%d\n", 'A');

	printf("%d\n", '\0');
	printf("%d\n", '\0');

	printf("%d\n", '0');
	printf("%d\n", '0');

	printf("%d\n", '1');
	printf("%d\n", '1');*/

	// 참고2 : 0 ~ 127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 %d : %c\n", i, i);
	}


	return 0;
}