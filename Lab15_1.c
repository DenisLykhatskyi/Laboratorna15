#include <stdio.h>
#include <conio.h>

int main() {
    float x, y;
    float *x_ptr, *y_ptr;

    x_ptr = &x;
    *x_ptr = 5;
    x = 5.5 + *x_ptr;
    y_ptr = x_ptr;
    y = *y_ptr / 2 + *x_ptr;
    y_ptr = &y;

    printf("The value of x= %f y=%f\n", x, y);
    printf("The address of x = %p y = %p\n", (void*)&x, (void*)&y);
    printf("The value of x_ptr = %p y_ptr = %p\n", (void*)x_ptr, (void*)y_ptr);
    printf("The value that x_ptr points to is %f.\n", *x_ptr);
    printf("The value that y_ptr points to is %f.\n", *y_ptr);
    printf("The address of x_ptr is %p.\n", (void*)&x_ptr);
    printf("The address of y_ptr is %p.\n", (void*)&y_ptr);
    puts("================");
    getch();
    return 0;
}