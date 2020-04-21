#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct
{
    int velocidad;  //Ghz entre 1 y 3
    int anio;       //entre 2000 y 2017
    int cantidad;   //de nucleos entre 1 y 4
    char *tipo_cpu;
}PC;

PC DevuelvePc(PC n1[]);

void CargarPc(PC ** p_pc, PC n1[], int NdePCs);

void PresentarPCs(PC n1[], int NdePCs);

//Arreglo de cadenas

char * tipo[] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

//----------MAIN_______

int main(){

    time_t t;
    srand((unsigned) time(&t));

    int NdePCs;

    printf("Que cantidad de PCs ingresara?\n");
    scanf("%d", &NdePCs);

    PC n1[NdePCs];      //pc numero 1 aqui guardo todas las pc

    PC * pc;

    pc = &n1[0];

    for (int i = 0; i < NdePCs; i++)
    {
        CargarPc(&pc, n1, NdePCs);
        printf("CPU: %s\n", n1[i].tipo_cpu);
    }

    PresentarPCs(n1, NdePCs);

    getchar();

    return 0;
}

void CargarPc(PC ** p_pc, PC n1[], int NdePCs){

    for (int i = 0; i < NdePCs; i++)
    {
        n1[i] = DevuelvePc(n1);
        (* p_pc)[i].velocidad = n1[i].velocidad;
        (* p_pc)[i].anio = n1[i].anio;
        (* p_pc)[i].cantidad = n1[i].cantidad;
        (* p_pc)[i].tipo_cpu = n1[i].tipo_cpu;
    }
    
};

PC DevuelvePc(PC n1[]){

    int aleatorio;
    aleatorio = rand() % 6;

    n1[0].velocidad = 1 + rand() % 3;
    n1[0].anio = 2000 + rand() % 18;
    n1[0].cantidad = 1 + rand() % 4;
    int tamanio = strlen(tipo[aleatorio]);
    n1[0].tipo_cpu = (char *) malloc(sizeof(tamanio));
    n1[0].tipo_cpu = strcpy(n1[0].tipo_cpu, tipo[aleatorio]);

    return n1[0];
};

void PresentarPCs(PC n1[], int NdePCs){

    for (int i = 0; i < NdePCs; i++)
    {
        printf("\nPC N°%d\n", i+1);
        printf("Velocidad: %d Ghz\n", n1[i].velocidad);
        printf("Anio: %d\n", n1[i].anio);
        printf("Nucleos: %d\n", n1[i].cantidad);
        printf("CPU: %s\n", n1[i].tipo_cpu);
    }
};