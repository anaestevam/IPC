#include <stdio.h>
#define LEN 50

    struct endereco {
        char rua[LEN];
        char cidade_estado_cep[LEN];
    };

    struct student {
        char id[10];
        int idade;
        struct endereco casa;
        struct endereco escola;
    };

    int main(){
        struct student pessoa;
        printf("Digite ID:");
        fgets(pessoa.id, 10, stdin);
        printf("Digite Rua de casa:");
        fgets(pessoa.casa.rua, 50, stdin);
        printf("Digite cidade de casa:");
        fgets(pessoa.casa.cidade_estado_cep, 50, stdin);
        printf("Digite Rua de escola:");
        fgets(pessoa.escola.rua, 50, stdin);
        printf("Digite cidade da escola:");
        fgets(pessoa.escola.cidade_estado_cep, 50, stdin);

        printf("\n\n --------- Lendo os dados da struct ---------\n\n");
        printf("ID ...........: %s", pessoa.id);
        printf("Endereco de casa .....: %s", pessoa.casa.rua);
        printf("CEP da casa ...: %.s\n" , pessoa.casa.cidade_estado_cep);
        printf("Endereco da escola .....: %s", pessoa.escola.rua);
        printf("CEP da escola ...: %.s\n" , pessoa.escola.cidade_estado_cep);



        return 0;
    }
