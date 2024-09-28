#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int cand = arr[0], c= 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == cand) {
            c++;
        } else {
            c--;
            if (c == 0) {
                cand = arr[i];
                c = 1;
            }
        }
    }
    c= 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == cand) {
            c++;
        }
    }
    if (c > n / 2) {
        printf("Majority element: %d\n", cand);
    } else {
        printf("Majority element: -1\n");
    }
    return 0;
}
