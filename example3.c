#include <math.h>
#include <stdio.h>

int main(void)
{
    double pi = 3.1415926535;
    double x, y;

    x = pi / 2;  // x 변수에 파이/2 값을 할당합니다.

    y = sin(x);  // x의 사인 값을 계산하여 y 변수에 할당합니다.
    printf("sin(%f) = %f\n", x, y);  // 사인 값인 y를 출력합니다.

    y = cos(x);  // x의 코사인 값을 계산하여 y 변수에 할당합니다.
    printf("cos(%f) = %f\n", x, y);  // 코사인 값인 y를 출력합니다.

    return 0;
}