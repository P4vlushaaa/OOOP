#include <stdio.h>

void countPer(float money, float p, float month){

    for (int i = 1; i <= month; ++i) {

        money = money + (money * (p / 100));

        printf("%lf", money);
        printf("\n");
    }
}

int main(){

    //Задание №1

    int numbers = 0;
    int High = 0;
    int Low = 0;
    char str[100] = {'\0'};

    fgets(str,100, stdin);

    for ( int i = 0; i < sizeof(str) - 1; ++i){

        if (str[i] >= '0' && str[i] <= '9'){

            numbers += 1;
        }

        else if (str[i] >= 'A' && str[i] <= 'Z'){

            High +=1;
        }

        else if (str[i] >= 'a' && str[i] <= 'z') {

            Low += 1;
        }
    }
    printf("Num = %d; High = %d; Low = %d\n", numbers, High, Low);

    //Задание №2

    float money, p, month;

    scanf("%f%f%f", &money, &p, &month);

    countPer(money, p, month);

    return 0;
}