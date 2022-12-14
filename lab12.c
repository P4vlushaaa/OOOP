#include <stdio.h>

int addition(int x, int y){
    return x + y;
}

int main() {
    FILE *file = fopen("res.txt", "w");
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    fprintf(file, "Resultat: %d", addition(x, y));
    fclose(file);
    return 0;
}