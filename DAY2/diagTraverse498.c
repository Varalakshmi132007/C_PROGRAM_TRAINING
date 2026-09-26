#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {

    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result[ROWS * COLS];
    int k = 0;

    for (int d = 0; d < ROWS + COLS - 1; d++) {

        if (d % 2 == 0) {

            // Move upward
            int row = (d < ROWS) ? d : ROWS - 1;
            int col = d - row;

            while (row >= 0 && col < COLS) {
                result[k++] = matrix[row][col];
                row--;
                col++;
            }

        } else {

            
            int col = (d < COLS) ? d : COLS - 1;
            int row = d - col;

            while (col >= 0 && row < ROWS) {
                result[k++] = matrix[row][col];
                row++;
                col--;
            }
        }
    }

    printf("Diagonal Traversal:\n");

    for (int i = 0; i < ROWS * COLS; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}