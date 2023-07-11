#include <stdio.h>

int main(void)
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

	return 0;
}