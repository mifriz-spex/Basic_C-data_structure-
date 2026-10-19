#include <stdio.h>
#include <string.h>

int main() {
char items[10][30] = {
"Nasi Goreng Spesial",
"Mie Goreng Seafood",
"Ayam Bakar Madu",
"Sate Ayam Madura",
"Soto Ayam Lamongan",
"Gado-Gado Jakarta",
"Es Teh Manis",
"Es Jeruk Peras",
"Kopi Hitam",
"Air Mineral"
};

long prices[10] = {25000, 22000, 30000, 28000, 20000, 18000, 5000, 8000, 6000, 4000};

int qty_purchased[10] = {0};

int choice, qty;
char lanjut = 'y';
long total_belanja = 0;
long diskon = 0;
long total_bayar = 0;

printf("==========================================\n");
printf("        SISTEM KASIR RUMAH MAKAN          \n");
printf("==========================================\n");


for (int i = 0; i < 10; i++) {
    printf("%2d. %-22s : Rp %ld\n", i + 1, items[i], prices[i]);
}
printf("==========================================\n");

while (lanjut == 'y' || lanjut == 'Y') {
    printf("\nMasukkan nomor menu (1-10) yang dibeli: ");
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= 10) {
        printf("Masukkan jumlah porsi/gelas untuk %s: ", items[choice - 1]);
        scanf("%d", &qty);
        
        if (qty > 0) {
            qty_purchased[choice - 1] += qty;
            printf(">> Berhasil ditambahkan ke keranjang!\n");
        } else {
            printf("!! Jumlah harus lebih dari 0 !!\n");
        }
    } else {
        printf("!! Pilihan menu tidak valid !!\n");
    }
    
    printf("\nApakah ada tambahan menu lain? (y/n): ");
    scanf(" %c", &lanjut);
}

printf("\n\n==========================================\n");
printf("               STRUK BELANJA              \n");
printf("==========================================\n");

for (int i = 0; i < 10; i++) {
    if (qty_purchased[i] > 0) {
        long subtotal_item = qty_purchased[i] * prices[i];
        printf("%-20s x%-2d = Rp %ld\n", items[i], qty_purchased[i], subtotal_item);
        total_belanja += subtotal_item;
    }
}
printf("------------------------------------------\n");

if (total_belanja > 100000) {
    diskon = total_belanja * 0.10; // Diskon 10%
    printf("Keterangan Diskon: 10%% (Belanja > 100rb)\n");
} else if (total_belanja > 50000) {
    diskon = total_belanja * 0.05; // Diskon 5%
    printf("Keterangan Diskon: 5%% (Belanja > 50rb)\n");
} else {
    diskon = 0; 
    printf("Keterangan Diskon: Tidak ada\n");
}

total_bayar = total_belanja - diskon;

printf("------------------------------------------\n");
printf("Total Belanja        : Rp %ld\n", total_belanja);
printf("Total Diskon         : Rp %ld\n", diskon);
printf("------------------------------------------\n");
printf("TOTAL BAYAR          : Rp %ld\n", total_bayar);
printf("==========================================\n");
printf("      Terima Kasih Atas Kunjungan Anda!   \n");
printf("==========================================\n");

return 0;


}