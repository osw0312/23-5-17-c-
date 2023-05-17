#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance)
{
    int i;
    printf("CAR #%d:", car_number);
    for (i = 0; i < distance / 10; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int i;
    int car1_dist = 0, car2_dist = 0;
    srand((unsigned)time(NULL));

    // 6번의 경주를 진행합니다.
    for (i = 0; i < 6; i++) {
        // 각 차량의 거리를 무작위로 증가시킵니다.
        car1_dist += rand() % 100;
        car2_dist += rand() % 100;

        // 각 차량의 거리에 따라 차량을 출력합니다.
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);

        printf("---------------------\n");

        _getch();  // 사용자의 키 입력을 대기합니다.
    }

    return 0;
}