#include <stdio.h>

void inicio(){
    printf( "Content-type: text/html\n\n" );
    printf("<html>");
    printf("<head>");
    printf("<meta charset=\"UTF-8\">");
  }
  void meio(){
    printf("</head>");
    printf("<body>");
  }
  void fim(){
    printf("</body>");
    printf("</html>");
  }
  void aba(char *texto){
    printf("<title>%s</title>",texto);
  }
  void titulo(char *titulo){
    printf("<h1>%s</h1>",titulo);
  }


int main(void) {
   inicio();
   aba("Segunda página");
   meio();
   titulo("Usando argumentos");
   fim();

  return 0;
}