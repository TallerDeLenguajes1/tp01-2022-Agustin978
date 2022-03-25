#include <stdio.h>
#include <stdlib.h>

int a = 25;
int *point;

int main()
{
    point = &a;
    printf("El contenido al que apunta el puntero es: %d o %d\n",*point, a);
    printf("La direccion de memoria almacenada por el puntero es: %d\n",point);
    printf("La direccion de memoria almacenada por la variable es: %d\n", &a);
    printf("Espacio de memoria utilizado por el puntero es: %d\n", sizeof(&a));
    printf("La direccion de memoria del puntero es: %d\n", &point);
    printf("El tamaño de memoria utilizado por el puntero es: %d\n", sizeof(&point));
    printf("Hola Mundo :v");
    return 0;
}