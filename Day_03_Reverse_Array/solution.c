#include <stdio.h>
void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tempo = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tempo;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
