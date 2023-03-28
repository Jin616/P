#include <stdio.h>

#define N 9
int grid[N][N];

int isValid(int row, int col, int num) {
    // Check row and column
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return 0;
        }
    }

    // Check 3x3 sub-grid
    int row_start = (row / 3) * 3;
    int col_start = (col / 3) * 3;
    for (int i = row_start; i < row_start + 3; i++) {
        for (int j = col_start; j < col_start + 3; j++) {
            if (grid[i][j] == num) {
                return 0;
            }
        }
    }

    return 1;
}

int solve(int row, int col) {
    // If we've reached the end of the grid, we're done!
    if (row == N) {
        return 1;
    }

    // If the current cell is already filled, move to the next cell
    if (grid[row][col] != 0) {
        if (col == N - 1) {
            if (solve(row + 1, 0)) {
                return 1;
            }
        } else {
            if (solve(row, col + 1)) {
                return 1;
            }
        }
    } else {
        // Try all possible values for the current cell
        for (int i = 1; i <= N; i++) {
            if (isValid(row, col, i)) {
                grid[row][col] = i;
                if (col == N - 1) {
                    if (solve(row + 1, 0)) {
                        return 1;
                    }
                } else {
                    if (solve(row, col + 1)) {
                        return 1;
                    }
                }
                grid[row][col] = 0;
            }
        }
    }

    return 0;
}

void printGrid() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Read input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Solve the puzzle
    if (solve(0, 0)) {
        printGrid();
    } else {
        printf("No solution found!\n");
    }

    return 0;
}