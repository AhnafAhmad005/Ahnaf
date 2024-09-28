#include <stdio.h>
int main() {
    int r, c;
    printf(" number of rows: ");
    scanf("%d", &r);
    printf(" number of columns: ");
    scanf("%d", &c);
    int mat[r][c];
    printf("Enter the matrix elements (0 or 1):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int max_row_index = -1;
    int max_ones = -1;
    for (int i = 0; i < r; i++) {
        int count= 0;
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        if (count > max_ones) {
            max_ones = count;
            max_row_index = i;
        }
    }
    printf("Row with maximum number of 1s: %d\n", max_row_index);
    return 0;
}
