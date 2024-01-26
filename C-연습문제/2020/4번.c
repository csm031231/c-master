#include <stdio.h>
#include <string.h>

void delAll(char data[], char ch, int *deletedCount);

int main() {
    char data[50];
    char ch;

    printf("���ڿ��� �Է��ϼ���: ");
    gets(data);

    printf("������ ���ڸ� �Է��ϼ���: ");
    scanf_s(" %c", &ch);

    int deletedCount;
    delAll(data, ch, &deletedCount);

    printf("���� '%c'�� ������ ���ڿ���", ch);
    puts(data);
    printf("\b�̰�, ������ ���� ���� %d�� �Դϴ�.", deletedCount);
    return 0;
}

void delAll(char data[], char ch, int* deletedCount) {
    int i, j;

    *deletedCount = 0; // �ʱ�ȭ

    for (i = 0, j = 0; data[i] != '\0'; i++) {
        if (data[i] != ch) {
            data[j++] = data[i];
        }
        else {
            (*deletedCount)++;
        }
    }

    data[j] = '\0'; // ���ο� ���ڿ��� ���� ǥ��
    return data;
}

