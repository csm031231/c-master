#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[1000001];
    int Count = 0;
    int a = 1; //첫 문자 나타냄...
    char c;

    for (int i = 0; (c = getchar()) != '\n'; i++) 
    {
        str[i] = c;
        if (c != ' ') 
        {
            if (a) 
            {
                Count++;
                a = 0; 
            }
        }
        else {
            a = 1; 
        }
    }

    printf("%d\n", Count);

    return 0;
}
