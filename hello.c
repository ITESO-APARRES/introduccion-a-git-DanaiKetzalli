#include <studio.h>

int main(void){
    printf("Hola mundo");
    
    //Nueva modificacion
    char resultado;
    resultado = 2-9;
    printf("Resultado de la resta", resultado);
    //Segunda modificacion
    char resultado1;
    resultado = 2+9;
    printf("Resultado de la suma", resultado1);
    
    decirHola ("DK");
    
    return(0);
}

void decirHola(char* nombre){
    printf("Hola %s, ¿Como estas?", nombre);
    
}

