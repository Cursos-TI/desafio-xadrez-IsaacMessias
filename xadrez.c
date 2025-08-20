#include <stdio.h>

int main() {
    char escolha;
    int move = 1;

    //apredsentação para o menu interativo
        printf("Bem vindo a movimentação de pecas de xadrez\n");
        printf("Selecione a peça que deseja mover:\n");
        printf("B. Bispo\n");
        printf("R. Rainha\n");
        printf("T. Torre\n");
        scanf(" %c", &escolha);

        switch (escolha)
        {
        case 'B'://para bispo, usei for
        case 'b':
            printf("Você escolheu o Bispo\n");
            printf("O bispo se move 5 casas na diagonal, para cima e direita:\n");
                for(move; move <= 5; move++){
                    printf("Bispo: Direito + Cima\n");
                }         
            printf("Bispo termina seu movimento\n");
            break;

        case 'R'://para rainha usei while
        case 'r':
            printf("Você escolheu a Rainha\n");
            printf("A rainha se move 8 casas para cima\n");
                while (move <= 8)
                {
                    printf("Rainha: Cima\n");
                    move ++;
                }
            printf("Rainha termina seu movimento\n");       
            break;

        case 'T'://para torre usei do-while
        case 't':
            printf("Você escolheu a Torre\n");
            printf("A torre se move 6 casas para a esquerda\n");
                do
                {
                   printf("Torre: Esquerda\n");
                   move ++;
                } while (move < 7);
            
            printf("Torre termina seu movimento\n");
            break;        
        default:
                printf("Escolha invalida...\n");
            break;
        }
    return 0;
}
