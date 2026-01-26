#include <stdio.h>

#define MAX 100

int visited[MAX][MAX];
int m, n;

// Directions: up, down, left, right
int rowDir[] = {-1, 1, 0, 0};
int colDir[] = {0, 0, -1, 1};

void dfs(int grid[MAX][MAX], int row, int col) {
    // Mark current cell as visited
    visited[row][col] = 1;

    // Explore neighbors
    for (int k = 0; k < 4; k++) {
        int newRow = row + rowDir[k];
        int newCol = col + colDir[k];

        if (newRow >= 0 && newRow < m &&
            newCol >= 0 && newCol < n &&
            grid[newRow][newCol] == 1 &&
            !visited[newRow][newCol]) {
            dfs(grid, newRow, newCol);
        }
    }
}

int countIslands(int grid[MAX][MAX]) {
    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1 && !visited[i][j]) {
                dfs(grid, i, j);
                count++;
            }
        }
    }
    return count;
}

int main() {
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int grid[MAX][MAX];
    printf("Enter grid (0 for water, 1 for land):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int result = countIslands(grid);
    printf("Number of islands: %d\n", result);

    return 0;
}
