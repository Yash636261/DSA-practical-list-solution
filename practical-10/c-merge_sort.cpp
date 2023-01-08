#include <iostream>
using namespace std;
void merge(int arr[], int L[], int nL, int M[], int nM) {
    int i, j, k;
    i = j = k = 0;
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
    while (i < nL) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < nM) {
        arr[k] = M[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int n) {
    if (n < 2) return;
    int mid = n / 2;
    int L[mid], M[n - mid];
    for (int i = 0; i < mid; i++) L[i] = arr[i];
        for (int i = mid; i < n; i++) M[i - mid] = arr[i];
            mergeSort(L, mid);
            mergeSort(M, n - mid);
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
