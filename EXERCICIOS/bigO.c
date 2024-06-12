int linearSearch(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) { // O(n)
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int *arr, int l, int r, int x) {
    while (l <= r) { 
        int m = l + (r - l) / 2;// O(logn) pq divide a cada iteracao
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}


void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) { // O(n^2)
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int maxSubArraySum(int *arr, int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];
    for (int i = 1; i < n; i++) { // O(n)
        current_max = (arr[i] > current_max + arr[i]) ? arr[i] : current_max + arr[i];
        max_so_far = (max_so_far > current_max) ? max_so_far : current_max;
    }
    return max_so_far;
}

int power(int x, int y) {
    int result = 1;
    while (y > 0) { 
        if (y % 2 == 1) {
            result = result * x;
        }
        y = y / 2; // O(log y) pq divide o y a cada iteracao
        x = x * x;
    }
    return result;
}
