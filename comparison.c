#include<stdio.h>

int main(){
    int angka1 = 7;
    int angka2 = 11;
    int uang = 23;

    printf("%d\n", angka1==angka2);
    printf("%d\n", angka1!=angka2);
    printf("%d\n", angka1>angka2);
    printf("%d\n", angka1<angka2);
    printf("%d\n", angka1>=angka2);
    printf("%d\n", angka1<=angka2);

    printf("Barang harganya 20 ribu rupiah \n");
    printf("%d\n", uang > 20);
    printf("%d\n", uang < 20);
    return 0;
}