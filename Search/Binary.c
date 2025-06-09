#include <stdio.h>

int bs(int a[], int size, int find) {
    int min = 0, max = size - 1, mid;

    while (min <= max) {
        mid = (min + max) / 2;

        if (a[mid] == find)
            return mid;
        else if (find < a[mid])
            max = mid - 1;
        else
            min = mid + 1;
    }

    return -min;  
}

int main() {

    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, find;

    printf("Enter the number to search: ");
    scanf("%d", &find);

    int index = bs(a, sizeof(a)/sizeof(a[0]), find);

    if (index >= 0)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found. It could be at index -%d\n", -index);

    return 0;
}