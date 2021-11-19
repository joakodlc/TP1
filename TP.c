#include <stdio.h>
#include <stdlib.h>
#define RED        "\x1b[31m"
#define YELLOW     "\x1b[33m"
#define RESET      "\x1b[0m"
#define BLUE       "\x1b[35m"
#define GREEN        "\x1b[32m"
#define CYAN        "\x1b[36m"

int main()
{
    printf(CYAN"---------------------------- \n"RESET);
    printf(CYAN"|---> MENU CALCULADORA <---| \n"RESET);
    printf(CYAN"---------------------------- \n \n"RESET);

    printf(YELLOW"1. Sumar dos numeros (A + B)\n");
    printf("2. Restar dos numeros (A - B)\n");
    printf("3. Multiplicar dos numeros (A * B)\n");
    printf("4. Dividir dos numeros (A / B)\n");
    printf("5. Calcular el factorial (A!)\n");
    printf("6. Calcular todas las operaciones\n");
    printf("7. Salir\n \n"RESET);

    printf(GREEN"Elija que hacer:"RESET);
}
