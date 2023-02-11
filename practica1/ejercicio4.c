#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, m;
    printf("escribe la medida del primer lado:\n");
    scanf("%f",&a);
    printf("escribe la medida del segundo lado:\n");
    scanf("%f",&b);
    printf("escribe la medida del angulo entre los lados:\n");
    scanf("%f",&c);
    m=(c*3.1416)/180;
    x= sqrt((pow(a,2)+(pow(b,2))-2*a*b*cos(m)));
    printf("la medida del tercer lado del triangulo es %.2f",x);
    return 0;
}
