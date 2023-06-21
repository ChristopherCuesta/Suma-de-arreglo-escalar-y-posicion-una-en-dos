#include <stdio.h>

void sumaArregloEscalar(float* arreglo, int tamaño, float escalar){

    for (size_t i = 0; i < tamaño-1; i++)
    {
        *(arreglo + 1) = *arreglo + escalar;
        arreglo++;
        
        

    }
}

int main(){

    float arreglo[]={1,5,2,3,4};
    int tamaño = 5;
    float escalar;

    printf("Ingrese un escalar: ");
    scanf("%f", &escalar);

    sumaArregloEscalar(arreglo, tamaño, escalar);

    for (int i = 0; i < tamaño; i++)
    {
        printf("\nLos numero son %.2f\n", arreglo[i]);
    }
}