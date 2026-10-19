#include <stdio.h>
#include <string.h>

struct konsol
{
    char nama[50];
    long harga;
};

int main(){
    int size = 3, i;
    struct konsol myArray[size];

    for(i=0; i<size; i++){
        printf("Masukkan nama konsol %d:", i+1);
        scanf("%s", &myArray[i].nama);
        printf("Masukkan harga konsol %d:", i+1);
        scanf("%d", &myArray[i].harga);
    }

    printf("\nData konsol\n");

    for(i=0; i<size; i++){
        printf("Nama konsol %d: %s", i + 1, myArray[i].nama);
        printf("\nHarga konsol %d: %d\n", i + 1, myArray[i].harga);
    }
        

return 0;
}