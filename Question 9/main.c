#include <stdio.h>
#include <string.h>

int main() {
    char nome[50]; 
    char sexo; 
    char estadoCivil[10]; 
    int anosCasada; 

 
    printf("Digite seu nome: ");
    scanf("%49s", nome);
   
    printf("Digite seu sexo (M ou F): ");
    scanf(" %c", &sexo); 
  
    printf("Digite seu estado civil (SOLTEIRA, CASADA, etc.): ");
    scanf("%9s", estadoCivil);

    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("Digite o número de anos casada: ");
        scanf("%d", &anosCasada);
    }

    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Estado Civil: %s\n", estadoCivil);
    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("anos Casada: %d\n", anosCasada);
    }

    return 0;
}