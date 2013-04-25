/**
 * Bubble Sort 冒泡排序
 * http://en.wikipedia.org/wiki/Bubble_sort
 * http://zh.wikipedia.org/wiki/冒泡排序
 */

#include <stdio.h>

static void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

static void bubble_sort(int a[], int n) {
    int i = n, j;
    int tmp;
    while (i > 0) {
        for (j = 0; j < i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // swap a[j] and a[j + 1]
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        i--;
    }
}

int main(int argc, char const *argv[])
{
    int a[6] = {3, 2, 5, 4, 9, 7};
    printf("original: ");
    display(a, 6);
    bubble_sort(a, 6);
    printf("sorted: ");
    display(a, 6);
    return 0;
}