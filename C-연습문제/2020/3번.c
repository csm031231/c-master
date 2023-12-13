#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int CcWord(char data[]);
int main(void) {

    char input[100];

    while (1) {
        printf("입력 : ");
        fgets(input, sizeof(input), stdin);

        if (strchr(input, '.') == NULL) {
            printf("마침표가 없습니다 다시 입력해주세요.\n");
            continue;
        }

        int cnt = CcWord(input);
        printf("출력 : %s (%d)단어\n", input, cnt);
        break;
    }

    return 0;
}
int CcWord(char data[]) {
    int cnt = 0;
    int WordStart = 1;

    for (int i = 0; data[i] != '\0'; i++) {
        if (isalpha(data[i])) {
            if (WordStart) {
                data[i] = toupper(data[i]);
                WordStart = 0;
            }
            else {
                data[i] = tolower(data[i]);
            }
        }
        else if (data[i] == ' ' || data[i] == ',' || data[i] == '.') {
            if (!WordStart) {
                cnt++;
                WordStart = 1;
            }
        }
    }

    return cnt;

}