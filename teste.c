
#include <stdio.h>

int main() {
    float num1, num2;
    int escolha;
    
    printf("Hello Word!!");
    printf("1. Adição\n2. Subtração\nEscolha: ");
    scanf("%d", &escolha);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    if (escolha == 1)
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    else if (escolha == 2)
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    else
        printf("Opção inválida.\n");

    return 0;
}