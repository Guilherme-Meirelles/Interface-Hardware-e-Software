#include <stdio.h>

typedef struct{
    int quantidade;
    float custo;
    char nome[20];
} Produto;

typedef struct{
    char nome[10];
    int poder;
    int defesa;
    int vida;
} Personagem;

void valorProduto(Produto a, Produto b){
    float valor_total = a.quantidade * a.custo + b.quantidade * b.custo;
    printf("Valor total %.2f\n", valor_total);
}

void imprimeProduto(Produto a, Produto b){

    printf("\nResultado esperado:");
    printf("\n%d %.2f %s",a.quantidade, a.custo, a.nome);
    printf("\n%d %.2f %s \n", b.quantidade, b.custo, b.nome);
}
int main(){
    Produto p[2] = {{50, 0.10, "porca"},{80, 0.2, "parafuso"}};
    Produto a = {50, 0.10, "porca"};
    Produto b = {80, 0.2, "parafuso"};

    imprimeProduto(p[0], p[1]);
    valorProduto(p[0],p[1]);
    return 0;

}