#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main_project1(void)
{
	srand(time(NULL));
	int num = rand() % 100+1; // 0 ~ 99 나옴
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞춰 보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN ↓\n");
		}
		else if (answer < num)
		{
			printf("UP ↑\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요.\n\n");
		}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패\n");
			break;
		}
	}
	
}