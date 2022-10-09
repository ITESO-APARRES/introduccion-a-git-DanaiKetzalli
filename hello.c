#include <studio.h>

int main(void){
    printf("Hola mundo");
    
    //Nueva modificacion
    char resultado;
    resultado = 2-9;
    printf("Resultado de la resta", resultado);
    
    decirHola ("DK");
    
    return(0);
}

void decirHola(char* nombre){
    printf("Hola %s, ¿Como estas?", nombre);
    
}

