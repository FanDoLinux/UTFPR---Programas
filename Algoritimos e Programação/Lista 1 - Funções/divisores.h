int contDivisores(int x)
{
    int i, cont = 0;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cont++;
        }
    }
    return cont;
}

void mostraDivisores(int x)
{
    int i;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d  ", i);
        }
    }
}

void mostrarDivQtdeSoma(int x, int y)
{
    int i, j, cont, soma;

    for (i = x; i <= y; i++)
    {
        printf("%d - ", i);
        cont = 0;
        soma = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cont++;
                printf("%d  ", j);
                soma = soma + j;
            }
        }
        printf("=> Qtde: %d =>  Soma: %d\n", cont, soma);
    }
}