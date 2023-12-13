#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int CcWord(char data[]);
int main(void) {

    char input[100];

    while (1) {
        printf("�Է� : ");
        fgets(input, sizeof(input), stdin);

        if (strchr(input, '.') == NULL) {
            printf("��ħǥ�� �����ϴ� �ٽ� �Է����ּ���.\n");
            continue;
        }

        int cnt = CcWord(input);
        printf("��� : %s (%d)�ܾ�\n", input, cnt);
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