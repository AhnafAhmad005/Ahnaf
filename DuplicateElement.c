#include <stdio.h>
int main() {
    int n, i, j;

    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are:\n");
    for (i = 0; i < n; i++) {
        int f = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                f= 1;
                break;
            }
        }
        if (!f) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}
