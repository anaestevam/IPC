#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

        int ctrl =0;
        int freq;
        int aluno1=0;
        int aluno2=0;
        int aluno3=0;
        int total_alunos=0;
        int p1, p2, p3, p1t, p2t, p3t;

        while(ctrl<3){
                ctrl++;
                total_alunos++;
            printf("Frequencia em RU: ");
            scanf("%d", &freq);


         if(freq<10){
            aluno1++;
         }else if(freq>=10 && freq<15){
            aluno2++;
        }else{
            aluno3++;
        }

        }

        p1=aluno1/total_alunos;
        p1t=p1*100;

        p2t=aluno2/total_alunos;
        p2t=p2*100;

        p3=aluno3/total_alunos;
        p3t=p3*100;

        printf("Porcentagem a) %d", p1t);
        printf("Porcentagem b) %d", p2t);
        printf("Porcentagem c) %d", p3t);

    return 0;
}
