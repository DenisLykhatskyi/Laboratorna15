#include <stdio.h>

int main() {
    int arr[10];
    int *p, *pmax;
    int i, n;

    printf("n=");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Некоректна кількість елементів (має бути від 1 до 10).\n");
        return 1;
    }

    printf(" input value arr \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    pmax = arr;

    for (p = arr + 1; p < arr + n; p++) {
        if (*p > *pmax) {
            pmax = p;
        }
    }

    printf("Max element = %d \n", *pmax);
    printf("its number = %d \n", (int)(pmax - arr + 1));

    return 0;
}