#include <stdio.h>

typedef struct {
    int mes, ano;
}Data;

typedef struct {
    int codigo, leite, alim;
    Data nasc;
    char abate;
}Gado;

void carregarDados();
void incluirRegistro();
int preencheAbate(Gado g[]);
void ImprimeTelaDeOpcoes();

int main ()
{
    Gado gados[2000];
    int op;
    ImprimeTelaDeOpcoes();

    while (op != 8) {
        scanf("%d", &op);
        switch (op) {
            case 1:
                //carregarDados();
                break;
            case 2:
                //devolver a quantidade de leite produzida por semana
                break;
            case 3:
                //devolver a quantidade total de alimento consumido por semana na fazenda
                break;
            case 4:
                //devolver a quantidade total de leite que vai ser produzido na fazenda apos o abate
                break;
            case 5:
                //devolver o numero de cabeças de gado que irao para o abate
                //preencheAbate();
                break;
            case 6:
                //incluir novo registro
                //incluirRegistro();
                break;
            case 7:
                //listar registros
                break;
            case 8:
                //sair do programa
                break;
        }

    }

    return 0;
}

void ImprimeTelaDeOpcoes()
{
    printf("1 - Carregar dados do arquivo\n2 - Quantidade total de leite produzido por semana\n3 - Quantidade total de aliomento consumido por semana na fazenda\n4 - Quantidade total de produzido após os abates\n5 - Numero de cabecas de gado que irao para o abate\n6 - Incluir novo registro\n7 - Listar registros\n8 - Sair\n");
}

void carregarDados()
{
    FILE *arq;
    char nome_do_arquivo[10000];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_do_arquivo);
    // Faltando carregar os dados
}

void incluirRegistro()
{

}

int preencheAbate(Gado g[])
{
   int qtd = 0;
}
