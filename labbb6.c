#include <stdio.h>
#include <stdlib.h>
int main() {

    int len;
    scanf("%d", &len);

    char arr[len];
    char *m = arr;

    for(int i = 0; i < len+1; i++){

        scanf("%c",&arr[i]);
    }

    for(int i = 0;i < len+1; i++) {

        printf("%c", *(m + i));
    }

    char *ukaz;
    char str;

    scanf("%c",&str);
    ukaz = malloc(str * sizeof(*ukaz));

    for(int i = 0; i < str; i++){

        scanf("%c", &ukaz[i]);
    }

    for(int i = 0; i < str; i++){

        printf("%c", ukaz[i]);
    }

    free(ukaz);
    return 0;
}