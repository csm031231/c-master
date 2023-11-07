#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    gets(str);
    int len = strlen(str);

    int Count = 0;
    int inWord = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            inWord = 0;
        }
        else if (inWord == 0) {
            inWord = 1;
            Count++;
        }
    }

    printf("%d\n", Count);

    return 0;
}