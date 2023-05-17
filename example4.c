#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    system("dir");  // "dir" 명령어를 실행하여 현재 디렉토리의 파일 목록을 출력합니다.

    printf("아무 키나 치세요\n");  // 사용자에게 아무 키나 입력하라는 메시지를 출력합니다.

    _getch();  // 사용자의 키 입력을 대기합니다.

    system("cls");  // 화면을 지우는 "cls" 명령어를 실행합니다.

    return 0;
}