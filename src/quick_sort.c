/**
 * Quick Sort 快速排序
 * http://en.wikipedia.org/wiki/Quicksort
 * http://zh.wikipedia.org/wiki/快速排序
 */

#include <stdio.h>

static void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

static void quick_sort(int a[], int low, int high) {
    if (low >= high) return;
    int i = low, j = high, current;
    current = a[i];

    while (i < j) {
        while (i < j && a[j] > current)
            j--;
        if (i < j)
            a[i++] = a[j];
        while (i < j && a[i] < current) 
            i++;
        if (i <j)
            a[j--] = a[i];
    }
    a[i] = current;

    if (low < i - 1) 
        quick_sort(a, low, i - 1);
    if (high > i + 1)
        quick_sort(a, i + 1, high);
}

int main(int argc, char const *argv[])
{
    int a[6] = {3, 2, 5, 4, 9, 7};
    printf("original: ");
    display(a, 6);
    quick_sort(a, 0, 5);
    printf("sorted: ");
    display(a, 6);
    return 0;
}