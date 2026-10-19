#include <stdio.h>

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int numbers[] = {10, 34, 2, 56, 87, 22, 11, 67};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Start:  ");
  printArray(numbers, length);

  for (int i = 0; i < length - 1; i++) {
    // Anggap elemen pertama di bagian yang belum terurut adalah yang terkecil
    int min_idx = i;
    
    // Cari apakah ada elemen yang lebih kecil di sisa array
    for (int j = i + 1; j < length; j++) {
      if (numbers[j] < numbers[min_idx]) {
        min_idx = j; // Simpan indeks nilai terkecil yang baru
      }
    }
    
    // Jika nilai terkecil bukan di posisi awal (i), tukar posisinya
    if (min_idx != i) {
      int temp = numbers[i];
      numbers[i] = numbers[min_idx];
      numbers[min_idx] = temp;
    }
    
    printf("Pass %d: ", i + 1);
    printArray(numbers, length);
  }

  return 0;
}