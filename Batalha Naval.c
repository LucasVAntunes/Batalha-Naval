#include <stdio.h>

int main (){

    int index;
    char * nomesalunos [3][3] = {
        {"Aluno 0", "Pt = 30", "Mat = 90"},
        {"Aluno 1", "Pt = 60", "Mat = 60"},
        {"Aluno 2", "Pt = 90", "Mat = 30"}
    };

    printf ("Digite o número referente ao aluno que deseja acessar.\n");
    printf ("0. Aluno 0\n");
    printf ("1. Aluno 1\n");
    printf ("2. Aluno 2\n");
    scanf ("%d", &index);
    printf ("As notas do %s são %s e %s.\n\n", nomesalunos[index][0], nomesalunos[index][1], nomesalunos[index][2]);
    

    return 0;
}