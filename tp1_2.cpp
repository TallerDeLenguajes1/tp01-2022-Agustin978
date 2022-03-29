#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

//Declaracion de funciones
int cuadrado(int num);
void cuadrado2(int num);
void invertir(int num1, int num2);
void ordena(int num1, int num2);
void ingresoVariables();

int main()
{
    int num, resultado;

    printf("\n\nIngrese el numero que desea elevar al cuadrado: ");
    scanf("%d", &num);

    resultado = cuadrado(num);
    printf("\nEl resultado del numero %d elevado al cuadrado es: %d\n", num, resultado);
    cuadrado2(num);

    printf("Direccion en que se guarda la variable ingresada: %d\n", &num);
    printf("Contenido de la variable ingresada: %d\n", num);

    invertir(15, 25);
    ordena(99, 100);

    fflush(stdin);
    getchar();
    system("cls");

    ingresoVariables();

    return 0;
}

//Declaracion de funciones
int cuadrado(int num)
{
    return pow(num, 2);
}

void cuadrado2(int num)
{
    int respuesta;
    printf("\n-------Resultado desde la funcion void-------\n");
    respuesta = pow(num, 2);
    printf("\nEl resultado del numero %d elevado al cuadrado es: %d\n\n", num, respuesta);
}

void invertir(int num1, int num2)
{
    int aux;
    printf("\nEl numero1 vale %d y el numero2 vale %d\n", num1, num2);
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf("\nAhora el numero1 vale %d y el numero2 vale %d\n", num1, num2);
}

void ordena(int num1, int num2)
{
    if(num1>num2)
    {
        printf("\nEl numero 1 %d es mayor que el numero 2 %d\n",num1, num2);
    }else
    {
        printf("\nEl numero 2 %d es mayor que el numero 1 %d\n",num2, num1);
    }
}

void ingresoVariables()
{
    int var1, var2;
    printf("\nIngrese los valores que desea invertir y ordenar:\n");
    scanf(">%d", &var1);
    scanf(">%d", &var2);
    ordena(var1, var2);
    invertir(var1, var2);
}