#include <stdio.h>
#include <limits.h>

int main() {
    int max = INT_MIN;
    int second_max = INT_MIN;
    int i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
      return 1;
    }

    int arr[n]; 

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    if (second_max == INT_MIN) {
        printf("No second largest element found (all values may be equal).\n");
    } else {
        printf("Second largest element: %d\n", second_max);
    }

    return 0;
}
