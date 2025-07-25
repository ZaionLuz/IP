#include <stdio.h>
int main ()
{
float peso, engordou,emagreceu;
printf("Digite o peso da pessoa ");
scanf("%f",&peso);
emagreceu= (peso-peso*0.20);
engordou=(peso+peso*0.15);
printf("Caso a pessoa emagreca seu peso sera %.2fKG, e caso ela engorde seu peso sera %.2fKG",emagreceu,engordou);
    return 0;
}