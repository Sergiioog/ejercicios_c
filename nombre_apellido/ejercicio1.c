/*
Se tiene un nombre y apellido por separado de un alumno. Se pide unir ambos, sin perder los datos por separado y escribirlos por pantalla
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv []){
	
	char nombre [20];
	char apellido [20];
	
	strcpy(nombre, argv[1]);
	strcpy(apellido, argv[2]);
	
	char *nombreApellido = (char*) malloc(strlen(nombre) + strlen(apellido) + 1);
	if(nombreApellido == NULL){
		printf("Error de asignacion de memoria\n");
		return 0;
	}
	strcpy(nombreApellido, nombre);
	strcat(nombreApellido, " ");
	strcat(nombreApellido, apellido);
	
	printf("Datos del usuario: \n");
	printf("Nombre: %s\n", nombre);
	printf("Apellido: %s\n", apellido);
	printf("NombreApellido: %s", nombreApellido);

	free(nombreApellido);
	return 0;
}