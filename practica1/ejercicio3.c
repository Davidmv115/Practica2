#include <stdio.h>
int main()
{
    float x, y;
    printf("escribe la medida del lado de un pentagono\n:");
    scanf("%f",&x);
    y= x*5;
    printf("el perimetro es: %.2f",y);
    return 0;
}
