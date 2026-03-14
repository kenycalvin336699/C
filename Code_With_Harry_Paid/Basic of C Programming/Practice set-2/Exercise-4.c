# include <stdio.h>

int main(int argc, char const *argv[])
{
    float r;
    
    printf("Enrer radius : ");
    scanf("%f", &r);

    printf("Area of circle = %f", 3.14 * r * r);
    return 0;
}
