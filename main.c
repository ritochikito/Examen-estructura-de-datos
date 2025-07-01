#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 1000 // rango desde 0 hasta 1000

// conjunto de forma que el indice es el numero y el valor indica su presencia ( 0 = no ; 1 = si )
typedef struct
{
    // capacidad de 1001
    int data[MAX_NUM + 1];
} Conjunto;

// inicializa el conjunto sin elementos (vacio)
void init(Conjunto *conjunto)
{
    for (int i = 0; i <= MAX_NUM; i++)
        conjunto->data[i] = 0;
}

// inserta el numero si es que este se encuentra dentro del rango del conjunto
void insertar(Conjunto *conjunto, int num)
{
    if (num < 0 || num > MAX_NUM)
    {
        printf("Numero fuera de rango del conjunto\n");
        return;
    }
    conjunto->data[num] = 1;
}

// elimina el numero del conjunto
void eliminar(Conjunto *conjunto, int num)
{
    if (num < 0 || num > MAX_NUM)
    {
        printf("Numero fuera de rango del conjunto\n");
        return;
    }
    conjunto->data[num] = 0;
}

// revisa si el numero existe en el conjunto ( 0 = no ; 1 = si)
void existe(Conjunto *conjunto, int num)
{
    if (num < 0 || num > MAX_NUM)
    {
        printf("Numero fuera de rango del conjunto\n");
        return;
    }
    else if (!conjunto->data[num])
    {
        printf("El numero %d no existe en el conjunto\n", num);
        return;
    }
    else
    {
        printf("El numero %d si existe en el conjunto", num);
        return;
    }
}

// muestra todos los numeros del conjunto
void mostrar(Conjunto *conjunto)
{
    printf("Conjunto = { ");
    for (int i = 0; i <= MAX_NUM; i++)
    {
        if (conjunto->data[i])
            printf("%d ", i);
    }
    printf("}\n");
}

int main()
{
    system("chcp 65001");
    system("cls");

    Conjunto conjunto;
    init(&conjunto);

    int opcion, num;
    do
    {
        printf("\nMenú:\n");
        printf(" 1) Insertar número\n");
        printf(" 2) Eliminar número\n");
        printf(" 3) Existe número?\n");
        printf(" 4) Mostrar conjunto\n");
        printf(" 5) Salir\n");
        printf("Elige opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Número a insertar: ");
            scanf("%d", &num);
            insertar(&conjunto, num);
            mostrar(&conjunto);
            break;
        case 2:
            printf("Número a eliminar: ");
            scanf("%d", &num);
            eliminar(&conjunto, num);
            mostrar(&conjunto);
            break;
        case 3:
            printf("Número a consultar: ");
            scanf("%d", &num);
            existe(&conjunto, num);
            break;
        case 4:
            mostrar(&conjunto);
            break;
        case 5:
            printf("Saliendo…\n");
            break;
        default:
            printf("Opción inválida.\n");
        }
    } while (opcion != 0);

    return 0;
}