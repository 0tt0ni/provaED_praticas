#include <stdio.h>
#include <stdlib.h>

//Filype ottoni campos rodrigues coelho
//UC22200168

typedef struct {
    char mercadoria[50];
    int compra;
    int venda;
} Produto;

int main() {
    Produto p;

    printf("Insira o nome da mercadoria: ");
    scanf("%s", p.mercadoria);

    printf("Insira o preco de compra da mercadoria: ");
    scanf("%d", &p.compra);

    p.venda = p.compra * 1.25;

    printf("preco de compra: %d \n preco de venda: %d", p.compra, p.venda);

    return 0;
}

