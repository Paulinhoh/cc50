#include <stdio.h>

int montanhaDupla(int tamanho)
{
    int contador = tamanho;
    for (int i = 1; i <= tamanho; i++)
    {
        for (int j = 1; j <= tamanho; j++)
        {
            if (j >= contador)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
        contador--;
    }
}

int main(void)
{
    montanhaDupla(8);
}
