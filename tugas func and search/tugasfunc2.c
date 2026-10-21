#include <stdio.h>
#include <math.h> 

double sisi_alas, tinggi;
double hasil;

double hitung_volume_limas() {
double luas_alas = pow(sisi_alas, 2);
double volume = (luas_alas * tinggi) / 3.0;
return volume;
}

int main() {
printf("Masukkan panjang sisi alas persegi: \n");
scanf("%lf", &sisi_alas);

printf("Masukkan nilai Tinggi limas: \n");
scanf("%lf", &tinggi);

hasil = hitung_volume_limas();

printf("\n--- Hasil Perhitungan ---\n");
printf("%.2lf\n", hasil);

return 0;
}