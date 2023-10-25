/*온도를 입력받아 출력하는 프로그램을 작성하자.
 단 입력받은 온도가 0도 미만이면 온도 출력시 "영하"를 덧붙여 출력하자 (if문 사용)
 출력 예: 15 -> 오늘 온도는 15도 입니다
          -15 -> 오늘 온도는 영하 15도 입니다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    printf("오늘 온도는 %d도 입니다.", a);
    if (a < 0) {
        printf("오늘 온도는 영하 %d도 입니다.", a);
    }
    return 0;
}
