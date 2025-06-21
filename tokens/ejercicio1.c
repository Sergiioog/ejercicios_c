/*

Se ha recogido una unica cadena una linea de un fichero csv con 3 campos nombre, apellido y edad.
Separar los tres campos en cadenas diferentes.

*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main (int argc, char *argv []){
	
	char *linea = "Sergio;Garcia;21";
	char *memLinea = malloc(strlen(linea) + 1);
	
	strcpy(memLinea, linea);
	
	char *token = strtok(memLinea, ";");
	while(token != NULL){
		printf("Token -> %s\n", token);
		token = strtok(NULL, ";");
	}
	
	free(linea);
	
	
	return 0;
}