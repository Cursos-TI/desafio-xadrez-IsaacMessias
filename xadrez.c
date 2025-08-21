#include <stdio.h>

void moverbispo(int casas) {
    if((casas > 0) && (casas < 8)) { //para o bispo pede apenas a quantidade de casas
        printf("Direita + Cima\n");
        moverbispo(casas - 1);
    }

}

void moverrainha(int casas) { //rainha se move sozinha
    if(casas > 0){ 
        printf("Esquerda\n");
        moverrainha (casas - 1);
    }

}

void movertorre(int casas, int direcao) {//para a torre, pede a direção e o numero de casas, usei condição alinhada
    if (casas > 0 && casas < 8){
        if(direcao == 1) { 
            printf("Direita\n");
            moverrainha (casas - 1);

        }else if(direcao == 2){
            printf("Esquerda\n");
            moverrainha (casas - 1);

        }else if(direcao == 3){
            printf("Cima\n");
            moverrainha (casas - 1);

        }else if(direcao == 4){
            printf("Baixo\n");
            moverrainha (casas - 1);

        }else{
            printf("escolha invalida\n");
            printf("Saindo...\n");
            return;
    }
}

}


int main() {
    char escolha;
    int move = 1;
    
    //apredsentação para o menu interativo
        printf("Bem vindo a movimentação de pecas de xadrez\n");
        printf("Selecione a peça que deseja mover:\n");
        printf("B. Bispo\n");
        printf("R. Rainha\n");
        printf("T. Torre\n");
        printf("H. Cavalo\n");
        scanf(" %c", &escolha);

        switch (escolha)
        {
        case 'B'://para bispo, usei for
        case 'b':
            printf("Você escolheu o Bispo\n");
            printf("O bispo se move na diagonal, para cima e direita.\n");
            printf("Quantas casas ele deve se mover ?\n");
            printf("escolha de 1 a 7 casas:");
            scanf("%d", &move);

                moverbispo(move);

            printf("Bispo termina seu movimento\n");
            break;

        case 'R'://para rainha usei while
        case 'r':
            move = 8;
            printf("A rainha se move 8 casas para a esquerda: \n");

            moverrainha(move);

            printf("Rainha termina seu movimento\n");

        break;

        case 'T'://para torre usei do-while
        case 't':
            
            int lado; // variavel local para usar como "direção"

            printf("Você escolheu a Torre\n");
            printf("A torre se move na horizontal e vertical, selecione a direção: \n");
            printf("1. Direita\n");
            printf("2. Esquerda\n");   
            printf("3. Cima\n");
            printf("4. Baixo\n");
            printf("Sua escolha: ");
            scanf("%d", &lado);
            

            printf("Agora, digite o numero de casas de 1 a 7: ");
            scanf(" %d", &move);

            movertorre(move, lado);


            printf("Torre termina seu movimento\n");
            break;        
        
        case 'H'://para torre usei do-while
        case 'h':
                
            int x, y, z;

            printf("Você escolheu o Cavalo:\n");
            printf("Escolha  a direção:\n1. Cima\n2. Baixo\n");
            scanf("%d", &y);
            printf("Escolha  o movimento finel:\n1. Esquerda\n2. Direita\n");
            scanf("%d", &move);

            for (int x = 1; x <= 1; x++)
            {
                for(z = 1 ; z <= 2; z++)
                {                    
                    if(y == 1){
                        printf("Cima\n");
                    }else{                       
                        printf("Baixo\n");
                    }
                }
                    if (move == 1){
                        printf("Esquerda\n");
                    }else{
                        printf("Direita\n");
                    }  
                                      
            }
            printf("Cavalo termina seu movimento\n");
            break;        
        
        default:
                printf("Escolha invalida...\n");
            break;
        }
    return 0;
}
