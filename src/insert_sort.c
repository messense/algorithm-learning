/**
 * Insertion Sort 插入排序
 * http://en.wikipedia.org/wiki/Insertion_sort
 * http://zh.wikipedia.org/zh-cn/插入排序
 */
#include <stdio.h>

static void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

static void insert_sort(int a[], int n) {
    int i, tmp;
    for (i = 1; i < n; i++) {
        /* insertion sort begins at index 1 */
        tmp = a[i];
        int j = i - 1;
        while (j >= 0 && tmp < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        display(a, n);
    }
}

int main(int argc, char const *argv[])
{
    int a[100];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    insert_sort(a, n);
    display(a, n);
    return 0;
}