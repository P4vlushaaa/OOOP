#include "stdio.h"

struct square{

    int side;
    int perimeter;
};

void CalcPerimeter(struct square* tmp){

    tmp->perimeter = tmp->side * 4;
    printf("%d", tmp->perimeter);
}

int main(){

    struct square A;
    A.side = 2;
    CalcPerimeter(&A);
    return 0;
};