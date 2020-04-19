#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Caracteristicas(PC n1);

typedef struct
{
    int velocidad;  //Ghz entre 1 y 3
    int anio;       //entre 2000 y 2017
    int cantidad;   //de nucleos entre 1 y 4
    char *tipo_cpu;
}PC;


int main(){
    int NdePCs;

    printf("Que cantidad de PCs ingresara?\n");
    scanf("%d", &NdePCs);

    PC n1[NdePCs];

    PC * n1 = (PC *) malloc(sizeof(PC) * NdePCs);

    char tipos[6][10]= {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    DevuelvePc(n1);

    return 0;
}

void DevuelvePc(PC *n1){
    printf("Buenos dias querido usuario: \n");
    printf("a continuacion ingrese los datos de la PC\n\n");

    printf("Velocidad \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
        
};