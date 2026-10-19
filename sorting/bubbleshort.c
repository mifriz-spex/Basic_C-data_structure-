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
    // Compare each pair of neighbors
    for (int j = 0; j < length - 1 - i; j++) {
      if (numbers[j] > numbers[j + 1]) {
        // Swap them
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
    printf("Pass %d: ", i + 1);
    printArray(numbers, length);
  }

  return 0;
}