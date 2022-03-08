#include<stdio.h>

int main(){
    int jogador, balas=0, tentativas=5, arvore1=0, arvore2=0;
    printf("Um marciano chegou em uma floresta e se escondeu atras de uma das 80 arvores quando viu um cacador que por vez, tinha apenas 6 balas\n\n");
    printf("Jogador1, voce sera marciano(1) ou cacador(2)? ");
    scanf("%d", &jogador);

    switch(jogador){    // Verificar opção do jogador.
case 1:
    printf("Jogador2, voce sera o cacador.\n");
    printf("\nMarciano: Me ache se for capaz, cacador. HAHAHA!\n");
    printf("\n## TECLE QUALQUER BOTAO PARA COMECAR ##");
    break;
case 2:
    printf("Jogador2, voce sera o marciano.\n");
    printf("\nCacador: Acho bom voce se esconder bem, marcianinho!\n");
    printf("\n## TECLE QUALQUER BOTAO PARA COMECAR ##");
    break;
default: // Opções acima de 2 não serão consideradas e seram dadas como invalidas.
    printf("Opcao invalida. Escolha 1 ou 2.\n");
    return 0;
    }
    getch();    // "Congelar" tela após o Switch e permitir que o próximo comando seja executado.
    system("cls");  // Comando para limpar tela após escolha de opções do jogador.
    while(balas<=6 && tentativas>=0){   // Loop até balas chegar a 6 e tentativas a 0.
        printf("\nMarciano, de 1 a 80, qual arvore voce quer se esconder? ");
        scanf("%d", &arvore1);
        system("cls");  // Comando limpa tela para que o jogador seguinte não veja a jogada do jogador anterior.
        printf("\nCacador, qual arvore o marciano se encontra? ");
        scanf("%d", &arvore2);
        if(arvore1==arvore2){   // Se arvore1 for igual arvore2, significa que o caçador encontrou o marciano.
            printf("Marciano: Voce me pegou, que sorte!\n");
            return 0;
        }else if(arvore1!=arvore2 && arvore1<arvore2){  // Se arvore1 for diferente e menor que arvore2, o caçador não acertou o marciano, que por vez, dirá que se encontra mais a esquerda.
        printf("Nao me achou! Estou mais a esquerda, sr. cacador. HAHAHA! \n\nTentativas restantes: %d\n", tentativas);
        }else{ // Semelhante ao comando anterior. Porém, o marciano dirá ao caçador que se encontra mais a direita.
        printf("Nao me achou! Estou mais a direita, sr. cacador. HAHAHA! \n\nTentativas restantes: %d\n", tentativas);
        }
        balas++; // Balas serão incrementadas até satisfazer por completo a condição.
        tentativas--; // Tentativas serão decrementadas até satisfazer por completo a condição.
    }
    printf("\nVOCE VIRA COMIGO PARA MARTE, CACADOR! HAHAHAHA!!\n\nGAME OVER! TENTE NOVAMENTE");
    getch();
    return 0;
}
