#include <stdio.h>

int main() {
    int arr[10];
    int *p, *pmax;
    int i, n;

    printf("n=");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf(".Некоректна кількість елементів (має бути від 1 до 10).\n");
        return 1;
    }

    printf("input value arr \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    pmax = arr;

    for (p = arr + 1; p < arr + n; p++) {
        if (*p > *pmax) {
            pmax = p;
        }
    }

    printf("Максимальний елемент = %d \n", *pmax);
    printf("Його число = %d \n", (int)(pmax - arr + 1));

    return 0;
}