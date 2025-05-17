#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    // Reverse the array using pointers
    while (start < end) {
        // Swap the values
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers
        start++;
        end--;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
