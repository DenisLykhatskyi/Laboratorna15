#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 3, b = 1;
    int *a_ptr, *b_ptr;

    a_ptr = &a;
    b = *a_ptr;
    b_ptr = &b;
    *b_ptr = 2 * (*a_ptr);

    printf("Значение a=%d b=%d\n", a, b);
    printf("Адреc a=%p b=%p\n", &a, &b);
    printf("Значение ptr=%p ptr=%p\n", a_ptr, b_ptr);
    printf("Значение по адресу a_ptr=%d.\n", *a_ptr);
    printf("Значение по адресу b_ptr=%d.\n", *b_ptr);
    printf("Адреc a_ptr=%p.\n", &a_ptr);
    printf("адреc b_ptr=%p.\n", &b_ptr);

    getch();
    return 0;
}