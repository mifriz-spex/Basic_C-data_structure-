#include <stdio.h>

#define GRAVITASI 9.81

double massa_jenis;    
double volume_tercelup; 
double gaya_apung;      

double hitung_gaya_apung() {
double hasil_fa = massa_jenis * GRAVITASI * volume_tercelup;
return hasil_fa;
}

int main() {
printf("Masukkan massa jenis fluida: ");
scanf("%lf", &massa_jenis);

printf("Masukkan volume benda yang tercelup ke dalam fluida: ");
scanf("%lf", &volume_tercelup);

gaya_apung = hitung_gaya_apung();

printf("\n--- Hasil Perhitungan ---\n");
printf("Gaya Apung (Fa) yang dialami benda tersebut adalah: %.2lf Newton\n", gaya_apung);

return 0;


}