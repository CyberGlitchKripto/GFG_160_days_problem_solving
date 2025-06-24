#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[], int n, int d) {
    d = d % n;  

    reverse(arr, 0, d - 1);     
    reverse(arr, d, n - 1);    
    reverse(arr, 0, n - 1);    
}

int main() {
    int n, d;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number of positions to rotate left (d): ");
    scanf("%d", &d);

    rotateArr(arr, n, d);

    printf("Array after rotating left by %d positions:\n", d);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
