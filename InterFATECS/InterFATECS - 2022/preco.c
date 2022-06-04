//Problema G - "Preço incorreto"

#include <stdio.h>

int main(void)
{
    float TrPrato, PePrato, ValQuilo, DifPratos;
    float ValFinal;
    
    scanf("%f\n%f\n%f", &TrPrato, &PePrato, &ValQuilo);
    
    DifPratos = PePrato - TrPrato;
    ValFinal = ValQuilo * DifPratos;
    
    printf("%.2f\n", ValFinal);

    return 0;
}
