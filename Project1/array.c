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
	int subway_array[3]; // 3개의 값을 지니는 배열 생성
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	printf("%a",subway_array);
	return 0;
}