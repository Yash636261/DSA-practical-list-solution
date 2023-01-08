#include <iostream>
using namespace std;
// Merge two subarrays L and M into arr
void merge(int arr[], int L[], int nL, int M[], int nM) {
    int i, j, k;
    // Initialize variables
    i = j = k = 0;
    // Merge the temp arrays back into arr
    while (i < nL && j < nM) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L, if there are any
    while (i < nL) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of M, if there are any
    while (j < nM) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

// Split array into halves and sort them recursively
void mergeSort(int arr[], int n) {
    if (n < 2) return; // base case

    int mid = n / 2;

    // Create temp arrays
    int L[mid], M[n - mid];

    // Copy data to temp arrays L and M
    for (int i = 0; i < mid; i++) L[i] = arr[i];
    for (int i = mid; i < n; i++) M[i - mid] = arr[i];

    // Recursively sort temp arrays
    mergeSort(L, mid);
    mergeSort(M, n - mid);

    // Merge sorted temp arrays back into arr
    merge(arr, L, mid, M, n - mid);
}

int main() {
    int arr[] = {3, 4, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
