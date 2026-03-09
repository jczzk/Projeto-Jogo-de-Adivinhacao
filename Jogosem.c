#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao;
    int numeroSecreto, palpite, regras;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 à 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite)
        {
            printf("Voce acertou!\n");
             printf("Número Secreto %d\n", numeroSecreto);
        } else {
            printf("Voce errou!\n");
            printf("Número Secreto %d\n", numeroSecreto);
        }
        
        break;
         case 2:
        printf("A explicação das Regras\n");
        printf("Digite a opção relacionada as regras do jogo\n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1");
            break;
        case 2:
            printf("Regra 2");
            break;    
        
        default:
            break;
        }
        break;
     case 3:
        printf("Saindo do Jogo!\n");
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    
}