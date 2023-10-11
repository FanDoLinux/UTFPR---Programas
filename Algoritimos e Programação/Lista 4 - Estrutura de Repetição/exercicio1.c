/*O número 3.025 possui a seguinte característica: 30 + 25 = 55 e 552 = 3 025. Faça um programa que escreva
todos os números com quatro algarismos que possuem a citada característica.*/

#include <stdio.h>

int main()
{

    int i, p1, p2;

    for (i = 1000; i < 10000; i++)
    {
        p1 = i / 100;
        p2 = i % 100;
        if ((p1 + p2) * (p1 + p2) == i)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}