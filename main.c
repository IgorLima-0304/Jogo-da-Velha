#include <stdio.h>
#include <string.h>

FILE *arquivo;

void GravarUsuario(char nome[50]){
  FILE *arquivo = fopen("arquivo.txt", "a");
  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo");
    return;
  }
  printf("Digite o nome do usuário: ");
  scanf(" %[^\n]", nome);  
  fprintf(arquivo, "%s\n", nome);
  fclose(arquivo);
  } 

  
void LerUsuario(char nome[50]){
  FILE *arquivo = fopen("arquivo.txt", "r");
  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo");
  }

  while(fgets(nome, 50, arquivo) != NULL){
    printf("%s", nome);
  }
  fclose(arquivo);
} 

void concatenarArquivos(const char *arquivo1, const char *arquivo2, const char *arquivo3) {
    FILE *f1 = fopen(arquivo1, "r");
    FILE *f2 = fopen(arquivo2, "r");
    FILE *f3 = fopen(arquivo3, "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Erro ao abrir um dos arquivos.\n");
    }

    int ch;

    
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }


    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }
    
    printf("Arquivo gerado.\n");

    fclose(f1);
    fclose(f2);
    fclose(f3);
}

int main(void) {
  char nome[50];
  char arquivo1[100], arquivo2[100], arquivo3[100];
  int opcaoarq;
  int opcao;

printf("Digite 1 para Tarefa1 ou 2 para Tarefa2: ");
scanf("%d", &opcao);

  switch(opcao){
    case 1:
      printf("Digite 1 para gravar um usuário, 2 para ler o arquivo ou 3 para sair: ");
      scanf("%d", &opcaoarq);
      switch(opcaoarq){
        case 1: 
          GravarUsuario(nome);
        break;

        case 2:
          LerUsuario(nome);
        break;

        case 3:
          printf("Saindo...");
        break;

        default:
        printf("Opção inválida");
          }
    break;

    case 2:
        printf("Informe o nome do primeiro arquivo: ");
        scanf("%s", arquivo1);

        printf("Informe o nome do segundo arquivo: ");
        scanf("%s", arquivo2);

        printf("Informe o nome do arquivo de saída: ");
        scanf("%s", arquivo3);

        concatenarArquivos(arquivo1, arquivo2, arquivo3);
       break;

    default:
    printf("Opção inválida");
  }
  return 0;
}