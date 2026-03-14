# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    int c = a;
    a = b;
    b = c;
    printf("After swap: a = %d, b = %d", a, b);
    return 0;
}
