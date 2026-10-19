#include <stdio.h>

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Fungsi untuk menggabungkan dua sub-array yang terurut
void merge(int arr[], int l, int m, int r, int length) {
  int n1 = m - l + 1;
  int n2 = r - m;

  // Array sementara untuk menampung bagian kiri dan kanan
  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  // Menggabungkan kembali array sementara ke arr[l..r]
  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Menyalin sisa elemen L[] jika masih ada
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Menyalin sisa elemen R[] jika masih ada
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }

  printf("Gabung indeks %d - %d: ", l, r);
  printArray(arr, length);
}

// Fungsi utama Merge Sort secara rekursif
void mergeSort(int arr[], int l, int r, int length) {
  if (l < r) {
    int m = l + (r - l) / 2; // Cari titik tengah

    // Bagi dua bagian (kiri dan kanan)
    mergeSort(arr, l, m, length);
    mergeSort(arr, m + 1, r, length);

    // Gabungkan kedua paruh yang sudah terurut
    merge(arr, l, m, r, length);
  }
}

int main() {
  int numbers[] = {10, 34, 2, 56, 87, 22, 11, 67};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Start:  ");
  printArray(numbers, length);
  printf("------------------------\n");

  mergeSort(numbers, 0, length - 1, length);

  printf("------------------------\n");
  printf("Sorted: ");
  printArray(numbers, length);

  return 0;
}