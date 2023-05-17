#include <stdio.h>
#include <math.h>

#define PI 3.141592

// 각도를 라디안으로 변환하는 함수
double rad(double degree)
{
    return PI * degree / 180.0;
}

// 막대 그래프를 출력하는 함수
void drawbar(int height)
{
    for (int i = 0; i < height; i++)
        printf("*");
    printf("\n");
}

int main(void)
{
    int degree, x, y;

    for (degree = 0; degree <= 90; degree += 10) {
        // 싸인 함수의 값을 계산하여 막대 그래프의 높이로 사용
        // 실수값인 싸인 함수의 결과를 정수로 반올림하여 증폭함
        y = (int)(60 * sin(rad((double)degree)) + 0.5);

        drawbar(y);  // 막대 그래프 출력
    }

    return 0;
}