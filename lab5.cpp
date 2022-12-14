#include <stdio.h>

int main(){

    int len;
    scanf("%d", &len);
    int massive[len];

    for (int i = 0; i < len; ++i) {
        scanf("%d", &massive[i]);
    }

    for (int i = 0; i < len; ++i) {
        printf("%d ", massive[i]);
    }

    printf("\n");

    int mas1[2][2];
    int mas2[2][2];
    int mas3[2][2];

    scanf("%d %d", &mas1[0][0], &mas1[0][1]);
    scanf("%d %d", &mas1[1][0], &mas1[1][1]);

    scanf("%d %d", &mas2[0][0], &mas2[0][1]);
    scanf("%d %d", &mas2[1][0], &mas2[1][1]);

    mas3[0][0] = mas1[0][0] * mas2[0][0] + mas1[0][1] * mas2[1][0];
    mas3[0][1] = mas1[0][0] * mas2[0][1] + mas1[0][1] * mas2[1][1];
    mas3[1][0] = mas1[1][0] * mas2[0][0] + mas1[1][1] * mas2[1][0];
    mas3[1][1] = mas1[1][0] * mas2[0][1] + mas1[1][1] * mas2[1][1];

    printf("%d %d\n", mas3[0][0], mas3[0][1]);
    printf("%d %d", mas3[1][0], mas3[1][1]);

    return 0;
}
