
#define MAX 10
#define MAX_ELEMENTOS 25

void lerMatriz(Matriz *m, int numero) {
    printf("\n--- Cadastro da Matriz %d ---\n", numero);

    do {
        printf("Quantidade de linhas (1 a 10): ");
        scanf("%d", &m->linhas);

        printf("Quantidade de colunas (1 a 10): ");
        scanf("%d", &m->colunas);

        if (m->linhas < 1 || m->colunas < 1 ||
            m->linhas > MAX || m->colunas > MAX ||
            m->linhas * m->colunas > MAX_ELEMENTOS) {
            printf("\nDimensoes invalidas! ");
            printf("A matriz pode ter no maximo 25 elementos.\n");
        }

    } while (m->linhas < 1 || m->colunas < 1 ||
             m->linhas > MAX || m->colunas > MAX ||
             m->linhas * m->colunas > MAX_ELEMENTOS);

    for (int i = 0; i < m->linhas; i++) {
        for (int j = 0; j < m->colunas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%lf", &m->dados[i][j]);
        }
    }
}
