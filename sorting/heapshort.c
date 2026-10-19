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

// Fungsi untuk memastikan subtree yang berakar di indeks i memenuhi sifat Max-Heap
void heapify(int arr[], int n, int i) {
  int largest = i;       // Inisialisasi terbesar sebagai akar
  int left = 2 * i + 1;  // Indeks anak kiri
  int right = 2 * i + 2; // Indeks anak kanan

  // Jika anak kiri lebih besar dari akar
  if (left < n && arr[left] > arr[largest])
    largest = left;

  // Jika anak kanan lebih besar dari nilai terbesar saat ini
  if (right < n && arr[right] > arr[largest])
    largest = right;

  // Jika nilai terbesar bukan akar
  if (largest != i) {
    swap(&arr[i], &arr[largest]);

    // Lakukan heapify ulang pada subtree yang terdampak
    heapify(arr, n, largest);
  }
}

// Fungsi utama Heap Sort
void heapSort(int arr[], int length) {
  // 1. Membangun Max-Heap dari array
  for (int i = length / 2 - 1; i >= 0; i--) {
    heapify(arr, length, i);
  }

  printf("Max-Heap Awal: ");
  printArray(arr, length);
  printf("------------------------\n");

  // 2. Ekstrak elemen satu per satu dari heap
  for (int i = length - 1; i > 0; i--) {
    // Pindahkan nilai terbesar (akar di index 0) ke posisi akhir (index i)
    swap(&arr[0], &arr[i]);

    // Panggil heapify pada heap yang tersisa (ukuran berkurang jadi i)
    heapify(arr, i, 0);

    printf("Ekstrak ke-%d:  ", length - i);
    printArray(arr, length);
  }
}

int main() {
  int numbers[] = {10, 34, 2, 56, 87, 22, 11, 67};
  int length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Start:         ");
  printArray(numbers, length);
  printf("------------------------\n");

  heapSort(numbers, length);

  printf("------------------------\n");
  printf("Sorted:        ");
  printArray(numbers, length);

  return 0;
}