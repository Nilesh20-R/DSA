#include<iostream>
using namespace std;

int partition(int* arr, int s, int e) {
    int start = s;
    int end = e;
    int pivot = arr[s];

    while (start <= end) {
        while (arr[start] <= pivot) {
            start++;
        }
        while (arr[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(arr[start], arr[end]);
        }
    }

    swap(arr[s], arr[end]);
    return end;
}

void quickSort(int arr[], int s, int e) {
    if (s < e) {
        int p = partition(arr, s, e);
        quickSort(arr, s, p - 1);
        quickSort(arr, p + 1, e);
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {23, 66, 12, 4, 81, 40, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    print(arr, n);

    return 0;
}
