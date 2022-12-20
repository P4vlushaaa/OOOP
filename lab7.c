#include <stdio.h>
#include <math.h>

enum musicalstyles{

    classik,
    rep,
    pop,
    electro,
    newage,
};

struct BF{

    unsigned char keyboard : 3;
};

struct coord{
    float x;
    float y;
};

double S(int a){

    return a * a;
}

double P(int a){

    return a * 4;
}

void Per (coord& A, coord& B){

    int per;
    per = sqrtf(powf(B.x - A.x, 2) + powf(B.y - A.y, 2)) * 4;
    printf("perimeter of the square is: %d\n", per);
}

int main(){

    //Задание №1

    enum musicalstyles c, r, p, e, n;
    c = classik;
    r = rep;
    p = pop;
    e = electro;
    n = newage;

    printf("%d", n+1);
    printf("\n");

    //Задание №2

    struct coord A = { 1, 1}; // две соседние вершины.
    struct coord B = { 3, 1};
    Per(A, B);

    //Задание №3

    struct BF bf;
    int key;

    printf("Enter key's number (NumL = 1, Caps = 2, ScrolL = 3)\n");
    scanf("%d", &key);

    if (key == 1)
        bf.keyboard = 1;
    if (key == 2)
        bf.keyboard = 2;
    if (key == 3)
        bf.keyboard = 4;

    printf("%u\n", bf.keyboard);
    return 0;
}
