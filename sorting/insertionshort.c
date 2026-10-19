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

  for (int i = 1; i < length; i++) {
    int key = numbers[i]; // Elemen yang akan disisipkan
    int j = i - 1;

    // Geser elemen yang lebih besar dari key ke posisi sebelah kanannya
    while (j >= 0 && numbers[j] > key) {
      numbers[j + 1] = numbers[j];
      j = j - 1;
    }
    // Tempatkan key di posisi yang tepat
    numbers[j + 1] = key;

    printf("Pass %d: ", i);
    printArray(numbers, length);
  }

  return 0;
}