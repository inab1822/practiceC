#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 함수 생성================================================
int getRandomNumber(int level);                    // 라운드마다 새로운 난수를 가져온다.
void showQuestion(int level, int num1, int num2);  // getRandomNumber로 가져온 정수로 문제 출력
void success();                                    // 문제를 맞추면 실행
void fail();                                       // 문제를 틀리면 실행
//==========================================================


int main_function_project(void)
{
	// 문이 5개가있다, 각 문마다 점점 어려운 수식 퀴즈가 출제
	// 맞히면 통과 틀리면 실패

	srand(time(NULL)); // 게임이 시작될 때마다 난수 초기화

	int count = 0; // 맞출 때마다 올라가는 카운트 수

	
	for (int i = 1; i <= 5; i++)    // 반복문 시작
	{
		// x * y 는 얼마
		int num1 = getRandomNumber(i); // getRandomNumber 함수로 난수를 가져와 
		int num2 = getRandomNumber(i); // num1 과 num2에 저장
		printf("%d x %d의 값은 얼마 입니까?", num1, num2); // 문제를 출력하는 printf
		showQuestion(i,num1,num2); // 해당 문제의 정답을 예쁘게 출력할 showQuestion 함수

		int answer = -1; // 답을 저장할 answer 변수

		scanf_s("%d", &answer); // 유저의 입력값을 answer에 보낸다.

		// 각 answer가 정답인지 틀린지 종료하고 싶은지 if 문으로 판단
		if (answer == -1)
		{
			printf("프로그램을 종료합니다.");
			//break; break는 해당 for문을 종료한다
			// 하지만 for문 종료 후 printf 함수를 실행하기때문에
			// exit(0); 함수로 아예 프로그램을 종료시키자
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			//성공
			success();
			count++;
		}
		else
		{
			//실패
			fail();
		}
	}

	printf("\n\n당신은 5개의 비밀번호 중 %d 개를 맞혔습니다.\n\n", count);
	return 0;
}

// 함수 정의 =====================================================================

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2)
{
	printf("\n\n####### %d 번째 비밀번호 #######\n\n", level);
	printf("\t%d x %d 는?\t\n", num1, num2);
	printf("\n###################################\n");
	printf("비밀번호를 입력하세요.(종료 : -1) >> ");

}

void success()
{
	printf("\n >> Good! 정답입니다.\n");
}
void fail()
{
	printf("\n >> No! 틀렸습니다.\n");
}

// ============================================================================