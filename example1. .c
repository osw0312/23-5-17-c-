#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);

int main(void) {
    int toss;
    int heads = 0;
    int tails = 0;
    
    srand((unsigned)time(NULL));  // 시드 값을 현재 시간으로 설정하여 무작위성을 증가시킵니다.

    for (toss = 0; toss < 100; toss++) {
        if (coin_toss() == 1)
            heads++;  // 동전 던지기 결과가 1이면 앞면(heads) 개수를 증가시킵니다.
        else
            tails++;  // 동전 던지기 결과가 0이면 뒷면(tails) 개수를 증가시킵니다.
    }

    printf("동전의 앞면: %d \n", heads);  // 앞면(heads) 개수를 출력합니다.
    printf("동전의 뒷면: %d \n", tails);  // 뒷면(tails) 개수를 출력합니다.

    return 0;
}

int coin_toss(void) {
    int head = rand() % 2;  // 0 또는 1을 무작위로 반환하여 동전 던지기 결과를 결정합니다.
    return head;
}