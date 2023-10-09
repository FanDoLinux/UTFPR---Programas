/*Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um
número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, cont = 0, cont1 = 0, cont2 = 0;
    float cont3 = 0.0, media;

    while (1)
    {
        printf("Informe um numero: ");

        scanf("%d", &num);
        if (num == 0)
            break;
        if (num > 0)
            cont++;
        if (num < 0 && num % 2 == 0)
            cont1++;
        if (num % 3 == 0)
        {
            cont3 = cont3 + fabs((float)num);
            cont2++;
        }
    }

    printf("\nNumeros positivos: %d\n", cont);
    printf("\nNumeros negativos que sao pares: %d\n", cont1);

    media = cont3 / cont2;

    if (cont2 != 0)
    {
        printf("\nA media dos numeros divisiveis por 3 eh: %.1f\n", media);
    }
    else
    {
        printf("\nNenhum numero divisivel por 3 foi informado.");
    }
    return 0;
}
