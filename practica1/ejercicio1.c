#include <stdio.h>
int main()
{
    float Farenheit, Centigrados;
    printf("ingresa la temperatura en grados Farenheit:\n");
    scanf("%f",&Farenheit);
    Centigrados= (Farenheit-32)*(0.5555);
    printf("tu temperatura convertida a grados Centigrados es: %.2f\n",Centigrados);
    return 0;
}