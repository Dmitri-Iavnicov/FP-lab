//Iavnicov Dmitri, I2302, Lab 1,   Вариант 31
//Табулирование функции y=x*x+2*M_PI*cos(M_PI)*x
//Диапазон значений x = {0.1 - 2.5}, шаг d = 0.1

#include <iostream>
#include <math.h>

int main()
{

    float x {}, y {};

    printf("----------------------\n");
    printf("|         |          |\n");
    printf("|    X    |     Y    |\n");
    printf("|         |          |\n");
    printf("----------------------\n");

    for (x = 0.1; x <= 2.5; x += 0.1)
    {
        y = x*x+2*M_PI*cos(M_PI)*x;

        printf("|  %.2f   |  %.2f   |\n", x, y);
        printf("----------------------\n");
    }

    return 0;
}
