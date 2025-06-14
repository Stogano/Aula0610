#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {

    printf("Content-Type: text/html\n\n");

  
    char *query = getenv("QUERY_STRING");

    if (query == NULL) {
        printf("<p>Erro: Nenhuma query string recebida.</p>");
        return 1;
    }

   
    char *posicao = strchr(query, '=');

    if (posicao == NULL) {
        printf("<p>Erro: Query string malformada.</p>");
        return 1;
    }


    char *valor_recebido = posicao + 1;


    int ano_informado = atoi(valor_recebido);


    time_t agora = time(NULL);
    struct tm *data_atual = localtime(&agora);
    int ano_atual = data_atual->tm_year + 1900;


    int diferenca = ano_atual - ano_informado;


    printf("<h2>Resultado:</h2>");
    printf("<p>O ano informado foi: %d</p>", ano_informado);
    printf("<p>O ano atual é: %d</p>", ano_atual);
    printf("<p>Já se passaram %d anos.</p>", diferenca);

    return 0;
}
