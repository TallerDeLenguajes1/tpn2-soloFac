#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define filas 15

int main(){

    time_t t;

    srand((unsigned) time(&t));
    
    int columnas = 5 + rand() % 10;

    int * matriz = (int *) malloc(sizeof(int) * filas * columnas);

    int * pares = (int *) malloc(sizeof(int) * filas), m;    //variables para guardar n° de pares

    for (int i = 0; i < filas; i++)
    {
        m = 0;
        for (int j = 0; j < columnas; j++)
        {
            int s = * (matriz + i * columnas + j) = 100 + rand() % 901;
            if (s%2 == 0)
            {
                m++;
            }
        }
        pares[i] = m;
    }
    
    

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", * (matriz + i * columnas + j));
        }
        printf("\n");
    }

    for (int i = 0; i < filas; i++)
    {
        printf("Para fila '%d' hay %d pares\n", i+1, pares[i]);
    }

    printf("Hola soy una linea de codigo");
    printf("%c");

    return 0;
}
