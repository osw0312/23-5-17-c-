#define _CRT_SECURE_NO_WARNINGS  // Visual Studio에서 발생하는 경고 메시지를 무시하기 위한 전처리 지시문

#include <math.h>
#include <stdio.h>

int main(void)
{
    double height, distance, tree_height, degrees, radians;

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);  // 사용자로부터 나무와의 거리를 입력받아 변수 distance에 저장

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);  // 사용자로부터 측정자의 키를 입력받아 변수 height에 저장

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);  // 사용자로부터 각도를 입력받아 변수 degrees에 저장

    radians = degrees * (3.141592 / 180.0);  // 입력받은 각도를 라디안으로 변환하여 변수 radians에 저장

    tree_height = tan(radians) * distance + height;  // 나무의 높이를 계산하여 변수 tree_height에 저장

    printf("나무의 높이(단위는 미터): %lf \n", tree_height);  // 계산된 나무의 높이를 출력

    return 0;
}