#include <stdio.h>
#include <math.h>

#define pi 3.14

double hasil;
double jariJari;
double lingkaran(){
    double luas = pi*pow(jariJari,2);
    return luas;
}

int main(){
    printf("Masukkan jari jari: ");
    scanf("%lf", &jariJari);
    

    hasil = lingkaran();
    printf("\n--- Hasil Perhitungan ---\n");
    printf("%lf", hasil);
}