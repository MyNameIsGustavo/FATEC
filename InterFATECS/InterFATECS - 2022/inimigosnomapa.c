// Problema H - "Inimigos no mapa"

#include <stdio.h>
int main(void)
{   int Qtd, V1, V2, V3, V4, i, X, Y;

    V1 = 0;
    V2 = 0;
    V3 = 0;
    V4 = 0;

    scanf("%d", &Qtd);

    for (i=0; i < Qtd; i++)
    {
        scanf("%d %d", &X, &Y);

        if (X > 0 && Y > 0)
        {
            V1 = V1 + 1;
        }

        if (X > 0 && Y < 0)
        {
            V2 = V2 + 1;
        }

        if (X < 0 && Y < 0)
        {
            V3 = V3 + 1;
        }

        if (X < 0 && Y > 0)
        {
            V4 = V4 + 1;
        }

        X = 0;
        Y = 0;
    }

    printf("I = %d\nII = %d\nIII = %d\nIV = %d\n", V1, V2, V3, V4);

    return 0;
}