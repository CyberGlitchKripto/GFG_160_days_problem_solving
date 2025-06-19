#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0, j = 0; i < n; i++)
        if (arr[i]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j++] = temp;
        }
    printf("Array after pushing zeros to the end:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
