v
#include <stdio.h>

int main() {
    int arr[100], n, temp;

    // Get array size from user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Get array elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array in place
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i- 1];
        arr[n - i-1] = temp;
    }

    // Print the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
