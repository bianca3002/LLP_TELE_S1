#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

// Função para verificar aprovação dos alunos
void verifica_aprovacao(Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        // Verificar se o aluno foi reprovado por falta
        if (alunos[i].Faltas >= 20) {
            alunos[i].Reprovado_SN = 'S';
        } else {
            // Calcular a média
            alunos[i].Media = (alunos[i].N1 + alunos[i].N2) / 2;
            // Verificar se o aluno foi reprovado por média
            if (alunos[i].Media < 6.0) {
                alunos[i].Reprovado_SN = 'S';
            } else {
                alunos[i].Reprovado_SN = 'N';
            }
        }
    }
}

// Função para mostrar a aprovação dos alunos
void mostra_aprovacao(Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("N1: %.2f\n", alunos[i].N1);
        printf("N2: %.2f\n", alunos[i].N2);
        printf("Faltas: %d\n", alunos[i].Faltas);
        printf("Média: %.2f\n", alunos[i].Media);

        // Mostrar status de aprovação
        if (alunos[i].Reprovado_SN == 'S') {
            if (alunos[i].Faltas >= 20) {
                printf("REPROVADO POR FALTA\n");
            } else {
                printf("REPROVADO POR MEDIA\n");
            }
        } else {
            printf("APROVADO\n");
        }

        printf("\n");
    }
}

int main() {
    Aluno alunos[5] = {
        {1, "João", 8.5, 9.0, 0.0, 25, ' '},
        {2, "Maria", 9.0, 8.0, 0.0, 1, ' '},
        {3, "Pedro", 7.5, 8.5, 0.0, 3, ' '},
        {4, "Ana", 9.5, 9.5, 0.0, 20, ' '},
        {5, "Luiz", 8.0, 7.0, 0.0, 4, ' '}
    };

    // Verifica aprovação dos alunos
    verifica_aprovacao(alunos, 5);

    // Mostra a aprovação dos alunos
    mostra_aprovacao(alunos, 5);

    return 0;
}
