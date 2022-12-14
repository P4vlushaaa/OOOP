#include <stdio.h>

int Del (int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int NOK (int a, int b){
    return (a * b) / Del (a, b);
}

long long fibiter(int n){
    long long fib0 = 0;
    long long fib1 = 1;
    long long fib;
    for (int i = 1; i < n; ++i){
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;
    }
    return fib;
}

long long FibRec(int n)
{
    if(n<1) {
        return 0;
    }
    if(n<2) {
        return 1;
    }
    return FibRec(n-2)+FibRec(n-1);
}

int main(){

    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Del = %d\n", Del(a, b));
    printf("Krat = %d\n", NOK(a, b));

    long long x;

    scanf("%d", &x);
    printf("%lli", fibiter(x));
    printf("%lli", FibRec(x));
    return 0;

}


