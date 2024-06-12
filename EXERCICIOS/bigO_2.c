#include <stdio.h>

void selectionSort(int *arr, int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) { // O(n)
        min_idx = i;
        for (j = i+1; j < n; j++) { // O(n)
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
} // O(n^2)

void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n-1; i++) { // O(n)
        for (j = 0; j < n-i-1; j++) { // O(n)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
} // O(n^2)

int maxSubArraySum2D(int **arr, int rows, int cols) {
    int max_sum = INT_MIN;
    for (int left = 0; left < cols; left++) { // O(n)
        int temp[rows];
        memset(temp, 0, sizeof(temp)); // O(n)
        for (int right = left; right < cols; right++) { // O(n)
            for (int i = 0; i < rows; i++) { // O(n)
                temp[i] += arr[i][right];
            }
            int sum = maxSubArraySum(temp, rows);
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    return max_sum;
} // O(n^3)

int maxSubArraySum(int *arr, int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];
    for (int i = 1; i < n; i++) { // O(n)
        current_max = (arr[i] > current_max + arr[i]) ? arr[i] : current_max + arr[i];
        max_so_far = (max_so_far > current_max) ? max_so_far : current_max;
    }
    return max_so_far;
} // O(n)

void DFS(int v, int *visited, int **adj, int n) {
    visited[v] = 1;
    for (int i = 0; i < n; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            DFS(i, visited, adj, n);
        }
    }
} // O(V + E)

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int sumTree(struct TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    return root->val + sumTree(root->left) + sumTree(root->right);
} // O(n)
