#include <stdio.h>

void sumaEscalar(float* arreglo, int tamaño, float escalar){

    for (size_t i = 0; i < tamaño; i++)
    {
        *arreglo = *arreglo + escalar;
        arreglo++;
        
        

    }
}

int main(){
    float arreglo[]={1,5,2,3,4};
    int tamaño = 5;
    float escalar;

    printf("Ingrese un escalar: ");
    scanf("%f", &escalar);

    sumaEscalar(arreglo, tamaño, escalar);

    for (int i = 0; i < tamaño; i++)
    {
        printf("\nLos numero son %.2f\n", arreglo[i]);
    }
}