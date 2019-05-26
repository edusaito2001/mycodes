 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #define tam 100

 int main () {
    char nome1[tam], nome2[tam], copiadx[tam]; //declarando vetores string
    int tamn1, tamn2, c1, c2;
    printf("Insira dois nomes: \n");
    gets(nome1); //scanf das strings
    gets(nome2);
    tamn1 = strlen(nome1); //atribui a variavel tamn1 o numero de letras/tamanho da palavra
    tamn2 = strlen(nome2);
    if (strcmp(nome1, nome2)<0) /*compara as strings - se a primeira vier antes na ordem alfabetica
                                  ela será menor <0*/
        strcpy(copiadx, nome1); //copiando uma string para outra
        else strcpy(copiadx, nome2);
    printf("Escolha a posicao de um caractere de cada nome: \n");
    scanf("%d %d", &c1, &c2);
    c1 = c1-1;
    c2 = c2-1;
    printf("%s %d letras, o caractere escolhido foi (%c) \n", nome1, tamn1, nome1[c1]); //%s para string, %c para apenas uma letra
    printf("%s %d letras, o caractere escolhido foi (%c) \n", nome2, tamn2, nome2[c2]);
    printf("Ordem alfabetica: %s vem primeiro  \n", copiadx);
    system("pause");
    return 0;
 }
