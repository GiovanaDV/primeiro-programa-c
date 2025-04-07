#include <stdio.h> //inclui biblioteca padrão de entrada e saída do C
int main()         // declaracao funcao main - o ponto de entrada (onde execucao comeca)
{
    printf("Ola, Mundo!\n");
    return 0; // indica que o programa terminou com sucesso 
}

// <stdio.h> contem funcoes essenciais para imprimir na tela e ler dados do usuario, etc; h significa
// header; "Standard Input and Output Header"

// int depois de main() indica que essa funcao retorna um numero inteiro (codigo de saida do programa)

// printf: permite formatar o texto com especificadores de formato como %d (int), %f (float), %s (string)

// se o programa retornou 0 = compilou com sucesso
// programa retornou != 0 = podem indicar que ocorreu algum erro
