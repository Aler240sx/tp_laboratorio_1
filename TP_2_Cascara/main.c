#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 20

int main()
{
    EPersona lista[CANT];

    char seguir = 's';
    int opcion;

    while(seguir == 's')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        printf("Ingrese una opcion: ");
        fflush(stdin);
        scanf("%d" ,&opcion);

        switch(opcion)
        {
            case 1:
                ObtenerEspacioLibre(lista ,CANT);
                break;
            case 2:
                BajaDePersonas(lista ,CANT);
                break;
            case 3:
                OrdenamientoDePersonas(lista ,CANT);
                break;
            case 4:
                GraficoDePersonas(lista ,CANT);
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                printf("\nERROR: Ingrese una opcion valida.\n\n");
                break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}
