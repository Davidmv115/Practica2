#include <stdio.h>
int main()
{
    float a, b, c, x;
    printf("escribe la longitud del prisma\n");
    scanf("%f",&a);
    printf("escribe la anchura del prisma\n");
    scanf("%f",&b);
    printf("escribe la altura del prisma\n");
    scanf("%f",&c);
    x= a*b*c;
    printf("el volumen del prisma rectangular es: %.2f",x);
    return 0;}
