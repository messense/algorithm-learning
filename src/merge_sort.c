/**
 * Merge Sort 归并排序
 * http://en.wikipedia.org/wiki/Merge_sort
 * http://zh.wikipedia.org/wiki/归并排序
 */

#include <stdio.h>
#include <stdlib.h>

static void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

static void merge(int a[], unsigned int first, unsigned int mid, unsigned int last) {
    int i;
    int *tmp = (int *)malloc(sizeof(int) * (last - first + 1));
    int lbegin = first; // left merge begin index
    int lend = mid; // left merge end index
    int rbegin = mid + 1; // right merge begin index
    int rend = last; // right merge end index

    //printf("mid = %d\n", mid);
    for (i = 0; lbegin <= lend && rbegin <= rend; i++) {
        if (a[lbegin] < a[rbegin])
        {
            //tmp[i] = a[lbegin];
            //lbegin++;
            tmp[i] = a[lbegin++];
        }
        else
        {
            //tmp[i] = a[rbegin];
            // rbegin++;
            tmp[i] = a[rbegin++];
        }
    }

    while (lbegin <= lend) {
        //tmp[i] = a[lbegin];
        //i++;
        //lbegin++;
        tmp[i++] = a[lbegin++];
    }
    while (rbegin <= rend) {
        //tmp[i] = a[rbegin];
        //i++;
        //rbegin++;
        tmp[i++] = a[rbegin++];
    }

    for (i = 0; i < (last - first + 1); i++) {
        a[first + i] = tmp[i];
    }

    free(tmp);
    tmp = NULL;
    //printf("merging: ");
    //display(a, 10);
}

static void merge_sort(int a[], unsigned int first, unsigned int last) {
    unsigned int mid = 0;
    if (first < last) {
        //mid = (first+last)/2; /* 注意防止溢出 */
        //mid = first/2 + last/2;
        mid = ((first & last) + ((first ^ last) >> 1));
        merge_sort(a, first, mid);
        merge_sort(a, mid + 1, last);
        merge(a, first, mid, last);
    }
}

int main(int argc, char const *argv[])
{
    int a[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("original: ");
    display(a, 10);
    merge_sort(a, 0, 9);
    printf("sorted: ");
    display(a, 10);
    return 0;
}