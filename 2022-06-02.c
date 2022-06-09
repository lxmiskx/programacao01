#include <stdio.h>

int main()
{
    //variaveis
    float cxentra, cxsai, cxetotal, cxstotal, saldo;
    cxetotal = 0;
    cxstotal = 0;
    
    //segunda-feira
    printf("Digite o valor do caixa de entrada de segunda-feira: ");
    scanf("%f", &cxentra);
    cxetotal = cxetotal + cxentra;
    
    printf("Digite o valor do caixa de saída de segunda-feira: ");
    scanf("%f", &cxsai);
    cxstotal = cxstotal + cxsai;
    
    //soma
    saldo = cxetotal - cxstotal;
    
    printf("\nCaixa total: %.2f", saldo);
    
    if (saldo > 2000 ){
    
    //avisos
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);
    }
    else if (saldo < -500){
        
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);    
    }
    
    //terça-feira
    printf("\nDigite o valor do caixa de entrada de terça-feira: ");
    scanf("%f", &cxentra);
    cxetotal = cxetotal + cxentra;
    
    printf("Digite o valor do caixa de saída de terça-feira: ");
    scanf("%f", &cxsai);
    cxstotal = cxstotal + cxsai;
    
    //soma
    saldo = cxetotal - cxstotal;
    
     printf("\nCaixa total: %.2f", saldo);
    
    if (saldo > 2000 ){
    
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);
    }
    else if (saldo < -500){
        
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);    
    }
    
    printf("\nDigite o valor do caixa de entrada de quarta-feira: ");
    scanf("%f", &cxentra);
    cxetotal = cxetotal + cxentra;
    
    printf("Digite o valor do caixa de saída de quarta-feira: ");
    scanf("%f", &cxsai);
    cxstotal = cxstotal + cxsai;
    
    //soma
    saldo = cxetotal - cxstotal;
    
    printf("\nCaixa total: %.2f", saldo);
    
    if (saldo > 2000 ){
    
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);
    }
    else if (saldo < -500){
        
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);    
    }
    
    printf("\nDigite o valor do caixa de entrada de quinta-feira: ");
    scanf("%f", &cxentra);
    cxetotal = cxetotal + cxentra;
    
    printf("Digite o valor do caixa de saída de quinta-feira: ");
    scanf("%f", &cxsai);
    cxstotal = cxstotal + cxsai;
    
    //soma
    saldo = cxetotal - cxstotal;
    
     printf("\nCaixa total: %.2f", saldo);
    
    if (saldo > 2000 ){
    
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);
    }
    else if (saldo < -500){
        
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);    
    }
    
    printf("\nDigite o valor do caixa de entrada de sexta-feira: ");
    scanf("%f", &cxentra);
    cxetotal = cxetotal + cxentra;
    
    printf("Digite o valor do caixa de saída de sexta-feira: ");
    scanf("%f", &cxsai);
    cxstotal = cxstotal + cxsai;
    
    //soma
    saldo = cxetotal - cxstotal;
    
    printf("\nCaixa total: %.2f", saldo);
    
    if (saldo > 2000 ){
    
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);
    }
    else if (saldo < -500){
        
    printf("\nAVISO");
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);    
    }
    
    printf("\nValor total - Caixa de entrada: %.2f\n", cxetotal);
    printf("Valor total - Caixa de saida: %.2f\n", cxstotal);
    printf("Saldo: %.2f", saldo);
    
    
    return 0;
}

