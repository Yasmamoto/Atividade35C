//atividade de C, feito no dia 13/09/2023, questão 35.
#include <stdio.h>
int main()
{
    int a;
    int b;
    int aux;
    
    printf("Digite o valor da variavel A: ");
    scanf("%i", &a);
    
    printf("Digite o valor da variavel B: ");
    scanf("%i", &b);
    
    aux = a;
    a = b;
    b = aux;
    
    printf("\nA = %i\n", a);
    printf("B = %i\n", b);
    
    return 0;
}
