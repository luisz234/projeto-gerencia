printf("Hello Word!!")
float num1, num2;
    int escolha;

    printf("Selecione a operação desejada:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("Escolha a operação (1/2): ");
    scanf("%d", &escolha);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (escolha) {
        case 1:
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        default:
            printf("Opção inválida! Por favor, escolha 1 ou 2.\n");
    }
