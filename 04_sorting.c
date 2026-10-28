#include <stdio.h>

#define MAX 100

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Bubble Sort: compare adjacent elements; largest moves to the end.
void bubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0; // Early stop if a full pass makes no swaps.
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

// Selection Sort: find the smallest remaining element and place it at i.
void selectionSort(int a[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) minIndex = j;
        }
        if (minIndex != i) swap(&a[i], &a[minIndex]);
    }
}

// Insertion Sort: insert each item into the already-sorted left part.
void insertionSort(int a[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j]; // Shift larger items right.
            j--;
        }
        a[j + 1] = key;
    }
}

void printArray(const int a[], int n) {
    int i;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main(void) {
    int a[MAX], n, i, choice;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    // Choose 1 = Bubble, 2 = Selection, 3 = Insertion.
    scanf("%d", &choice);

    if (choice == 1) bubbleSort(a, n);
    else if (choice == 2) selectionSort(a, n);
    else if (choice == 3) insertionSort(a, n);
    else {
        printf("Invalid choice\n");
        return 1;
    }

    printArray(a, n);
    return 0;
}
