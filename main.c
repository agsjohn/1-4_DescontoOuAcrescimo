#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float valor, total, desconto;
    printf("Digite o valor: ");
    scanf("%f", &valor);
    getchar();
    while(valor < 0){
        printf("Digite um valor válido: ");
        scanf("%i", &valor);
        getchar();
    }
    if(valor < 100){
        desconto = valor * 0.05;
        total = valor - desconto;
        printf("\nValor Bruto: R$%.2f \nDesconto: R$%.2f \nValor Líquido: R$%.2f \n", valor, desconto, total);
    }
    else{
        desconto = valor * 0.07;
        total = valor + desconto;
        printf("\nValor Bruto: R$%.2f \nAcréscimo: R$%.2f \nValor Líquido: R$%.2f \n", valor, desconto, total);
    }
    getchar();
}
