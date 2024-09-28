#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int c= 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) c++;
        else if (arr[i] == 1) c1++;
        else if (arr[i] == 2) c2++;
    }
    for (int i = 0; i < c; i++) arr[i] = 0;
    for (int i = c; i < c + c1; i++) arr[i] = 1;
    for (int i = c + c1; i < c+c1+c2; i++) arr[i] = 2;
    for (int i = 0; i < c+c1+c2; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
