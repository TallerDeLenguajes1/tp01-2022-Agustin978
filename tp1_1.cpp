#include <stdio.h>
#include <stdlib.h>

int a = 12;
int *point;

int main()
{
    point = &a;
    printf("La direccion de memoria es: %p\n",point);
    printf("El contenido al que apunta el puntero es: %d\n",*point);
    printf("Espacio de memoria utilizado por el puntero es: %d\n", sizeof(point));
    printf("Hola Mundo :v");
    return 0;
}