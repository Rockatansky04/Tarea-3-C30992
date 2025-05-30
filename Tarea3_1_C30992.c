#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void invertirString(char *Cadena) {
    int len = strlen(Cadena);
    for(int i = 0; i < len/2; i++) {
        char temp = Cadena[i];
        Cadena[i] = Cadena[len-i-1];
        Cadena[len-i-1] = temp;
    }
}

int StringBusqueda(char Caracter,char *Cadena){
    int Contador = 0;
    int len = strlen(Cadena);
    for(int i=0; i< len; i++ ){
        if (Cadena[i]==Caracter)
        {
            Contador++;
        }
        else
        {
            continue;
        } 
    }
     
    return Contador;

}

int main() {
    char Cadena[100]; 
    char Caracter;
    
    printf("Ingrese una cadena: \n");
    scanf("%99s", Cadena); 

    printf("Ingrese el caracter a buscar: \n");
    scanf(" %c", &Caracter);  
    
    invertirString(Cadena);  
    int Cantidad = StringBusqueda(Caracter, Cadena);
    
    printf("Cadena invertida: %s\n", Cadena);
    printf("Numero de veces que aparece el caracter ingresado: %d\n", Cantidad);

    return 0;
}