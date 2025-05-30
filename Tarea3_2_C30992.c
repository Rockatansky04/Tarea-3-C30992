#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define Max 100

int HayLetras(const char *Linea) { 
    for (int i = 0; Linea[i] != '\0'; i++) {
        if (!isdigit(Linea[i])) {

            return 0; 
    }
    return 1;
    }
}

int main() {
    char Linea[Max];

    while (fgets(Linea, sizeof(Linea), stdin)) {       
        Linea[strcspn(Linea, '\n')] = "\0";        
        if (strlen(Linea) == 0 || !HayLetras(Linea)) {  

            fprintf(stderr, "Error, Linea invalida: '%s'\n", Linea);   
        } else { 

            printf("Numero: '%s'\n", Linea); 
        }
    }

    return 0;
}