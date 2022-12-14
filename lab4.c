#include <stdio.h>

int main (void) {
    int num, max_num, min_num;
    scanf("%d", &num);
    printf("%d\n", ((num >= 1) && (num <= 1000)));
    max_num = 1000 / num;
    min_num = num / 1;
    printf("%d", max_num & min_num);

    int num2;
    scanf("%d", &num2);
    int bit = 1 & (num2 << 3);
    printf("%d", bit);
}