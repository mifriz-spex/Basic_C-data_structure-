#include <stdio.h>

int main(){
    int angkaAcak[5] = {12, 23, 45, 67, 78};
    int length = sizeof(angkaAcak) / sizeof(angkaAcak[0]);
    int a;

    for (a = 0; a < length; a++) {
    printf("%d ", angkaAcak[a]);
    }
}