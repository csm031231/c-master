#include <stdio.h>
#include <string.h>

void delAll(char data[], char ch, int *deletedCount);

int main() {
    char data[50];
    char ch;

    printf("문자열을 입력하세요: ");
    gets(data);

    printf("삭제할 문자를 입력하세요: ");
    scanf_s(" %c", &ch);

    int deletedCount;
    delAll(data, ch, &deletedCount);

    printf("문자 '%c'가 삭제된 문자열은", ch);
    puts(data);
    printf("\b이고, 삭제된 문자 수는 %d개 입니다.", deletedCount);
    return 0;
}

void delAll(char data[], char ch, int* deletedCount) {
    int i, j;

    *deletedCount = 0; // 초기화

    for (i = 0, j = 0; data[i] != '\0'; i++) {
        if (data[i] != ch) {
            data[j++] = data[i];
        }
        else {
            (*deletedCount)++;
        }
    }

    data[j] = '\0'; // 새로운 문자열의 끝을 표시
    return data;
}

