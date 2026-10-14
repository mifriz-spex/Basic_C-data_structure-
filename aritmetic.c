#include <stdio.h>

int main(){
    int angka1 = 25;
    int angka2 = 5;
    int angka3 = 10;

    printf("%d\n", angka1+angka2);
    printf("%d\n", angka1-angka2);
    printf("%d\n", angka1*angka2);
    printf("%d\n", angka1/angka2);
    printf("%d\n", angka1%angka2);

    ++angka3;
    printf("%d\n", angka3);
    --angka3;
    printf("%d\n", angka3);
    return 0;
}