#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end;  // 시작 시간과 종료 시간을 저장하기 위한 변수

    start = time(NULL);  // 현재 시간을 시작 시간으로 설정

    printf("10초가 되면 아무 키나 누르세요\n");

    while (1) {
        if (getchar())  // 사용자로부터 키 입력을 대기
            break;
    }

    printf("종료되었습니다.\n");

    end = time(NULL);  // 현재 시간을 종료 시간으로 설정

    printf("경과된 시간은 %ld 초입니다. \n", end - start);  // 경과 시간 계산 및 출력

    return 0;
}