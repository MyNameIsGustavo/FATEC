//Problema E - "Comprando apartamento"

#include <stdio.h>

int main(void)
{   float ValInv, TaxJuros, ValApart, juros;
    int meses;

    meses = 0;

    scanf("%f\n%f\n%f", &ValInv, &ValApart, &TaxJuros);

    if(ValInv >= ValApart)
    {
        printf("pode comprar agora\n");
    }

    else
        {
            while (ValInv < ValApart)
            {
                juros = ValInv * (TaxJuros/100);
                ValInv = ValInv + juros;

                meses++;
            }
            if(meses == 1)
                printf("possivel em 1 mes\n");
            else
                printf("possivel em %d meses\n", meses);
        }

    return 0;
}
