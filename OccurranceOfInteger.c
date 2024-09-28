#include <stdio.h>
int main() {
    int n, i, j,x, c=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            c++;
        }
    }
    if (c> 0) {
        printf("Number of occurrences of %d: %d\n", x, c);
    } else {
        printf("Number of occurrences of %d: 0\n", x);
    }
    return 0;
}
