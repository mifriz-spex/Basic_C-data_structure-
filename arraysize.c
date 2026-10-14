#include <stdio.h>

int main(){
    int angkaAcak[5] = {12, 23, 45, 67, 78};
    int length = sizeof(angkaAcak) / sizeof(angkaAcak[0]);

    printf("%zu\n", sizeof(angkaAcak));
    printf("%d", length);
}