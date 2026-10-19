#include <stdio.h>

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Fungsi untuk mengatur posisi pivot
int partition(int arr[], int low, int high, int length) {
  // Kita pilih elemen paling kanan sebagai pivot
  int pivot = arr[high]; 
  int i = (low - 1); // Indeks untuk elemen yang lebih kecil

  for (int j = low; j < high; j++) {
    // Jika elemen saat ini lebih kecil dari pivot
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  // Tempatkan pivot di posisi yang benar (di antara elemen kecil dan besar)
  swap(&arr[i + 1], &arr[high]);
  
  printf("Pivot %d pada posisinya: ", pivot);
  printArray(arr, length);
  
  return (i + 1);
}

// Fungsi rekursif Quick Sort
void quickSort(int arr[], int low, int high, int length) {
  if (low < high) {
    // pi adalah indeks partisi (posisi pivot yang sudah benar)
    int pi = partition(arr, low, high, length);

    // Urutkan elemen di sebelah kiri pivot
    quickSort(arr, low, pi - 1, length);
    // Urutkan elemen di sebelah kanan pivot
    quickSort(arr, pi + 1, high, length);
  }
}

int main() {
  int numbers[] = {10, 34, 2, 56, 87, 22, 11, 67};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Start:  ");
  printArray(numbers, length);
  printf("------------------------\n");

  quickSort(numbers, 0, length - 1, length);

  printf("------------------------\n");
  printf("Sorted: ");
  printArray(numbers, length);

  return 0;
}