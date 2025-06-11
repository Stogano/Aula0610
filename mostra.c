#include <stdio.h>
#include <stdlib.h>


int main(void) {
    printf( "Content-type: text/html\n\n" );
    char *recebido = getenv("QUERY_STRING");
    printf("Recebido: %s\n", recebido);
  
  return 0;
}