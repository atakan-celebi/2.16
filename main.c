#include <stdio.h>

int main(void)
{
    float a;
    printf("inserisci il prezzo del biglietto:");
    scanf("%f", &a);
    a = a +(a*0.15);
    printf("la proviggione del biglietto e': %f \n", a);
    a = a +5;
    printf("il prezzo finale del biglietto e' : %f ",a);

}

