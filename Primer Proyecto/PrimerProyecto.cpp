
/* ---------------------------------------
Calcular los números pares entre 1 y 100 
------------------------------------------*/

/* incluir las librerías a utilizar */

#include <iostream>
#include <cmath>

/* Declaración de las funciones: protofunciones */

void print_even(int min, int max);
void print_mod3(int min, int max);

/* función main */

int main(void)
{
    int m = 1, n = 100;

    std::cout<<"Numeros pares: ";
    print_even(m, n);
    std::cout<<"Numeros multiplos de 3: ";
    print_mod3(m, n);

    return 0;
}

void print_even(int min, int max)
{
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";   
        }
    }
    std::cout << "\n";
}

void print_mod3(int min, int max)
{
    
    for (int i = min; i <= max; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << i << " ";   
        } 
    }
    std::cout << "\n";

}