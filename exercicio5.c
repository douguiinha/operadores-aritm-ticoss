#include <stdio.h>

main()
{
    /*Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao valor de frete
    e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o
    valor de venda e indica a percenagem de lucro da mercadoria.*/

    // variaveis

    float custo, frete, despesa, valorBruto, valoVenda, lucro;

    printf("digite o custo do produto");
    scanf("%f," & custo);

    printf("digite o valor do frete");
    scanf("%f," & frete);

    printf("digite o despesa do produto");
    scanf("%f," & despesa);

    // calcular o valor bruto do produto
    // valor bruto = custo + frete + despesa

    valorBruto = custo + frete + despesa;

    // informar o valor bruto pro usuário

    printf("o valor bruto do produto e: R$%.2f. Digite o valor da venda:", valorBruto);
    scanf("%f", &valorVenda);

    // calculo do lucro

    lucro = (valorVenda - valorBruto) * 100 / valorBruto;

    // apresentação do lucro
    printf("Sua porcentagem de lucro  e: %2f2%%", lucro);
    N
}