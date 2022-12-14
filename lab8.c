#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char *string1, char *string2, int n) {

    size_t len1 = strlen(string1);
    size_t len2 = strlen(string2);

    char *result = malloc(len1 + len2 + 1);

    if (!result) {
        fprintf(stderr, "error\n");
        return NULL;
    }

    memcpy(result, string1, len1);
    memcpy(result + len1, string2, n);

    return result;
}

int last_entry(char str[], char n){
    int size = strlen(str);
    int k = size;
    for (int i = size; i > 0; i--){
        k--;
        if (str[i] == n){
            break;
        }
    }
    return k - 1;
}

int Search(char* str, char symb)
{
    int out;
    for (int i = 0; i < 10; ++i) {
        if (str[i] == symb) {
            out = i;
            break;
        }
    }

    return out;
}

int LenSearch(char* str1, char* str2)
{
    int k = 0;

    for (int i = 0; i < 10; ++i) {

        if ((str2[i] == str1[0]) || (str2[i] == str1[1]))
            str2[i] = '*';
    }

    for (int i = 0; i < 10; ++i) {

        if (str2[i] != '*') {
            ++k;
        }
    }

    return k-1;
}

int main(){

    //Задание №2

    int n = 2;

    char *s = concat("first", "second", n);

    printf("%s\n", s);
    free(s);

    printf("--------\n");

    //Задание №5

    char str21[10] = "first";
    char str22[10];

    strcpy(str22, str21);

    int i = 0;

    while (i < strlen(str22)){

        printf("%c", str22[i]);
        i++;
    }

    printf("\n");
    printf("--------\n");

    //Задание №8

    char str3[10];
    char symb;
    scanf("%s", str3);
    scanf("%s", &symb);

    printf("%d\n", Search(str3, symb));
    printf("--------\n");

    //Задание № 9

    char str41[11] = "0113456769";
    int ch = '1';
    char *pch;

    printf("%d", last_entry(str41, ch));
    printf("\n");
    printf("--------\n");

    //Задание №12

    char str51[2] = "ab";
    char str52[10];
    scanf("%s", str52);

    printf("%d\n", LenSearch(str51, str52));

    return 0;
}