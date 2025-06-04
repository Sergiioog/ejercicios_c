/*
- Crear el DNI de un ciudadano concatenando un número de 8 cifras que se le pasa cómo parametro del main y la letra correspondiente

- Para obtener la letra, es necesario dividir el numero del DNI entre 23 y en lugar de calcular los decimales nos fijaremos en el resto de la ejecucion

- Luego comparar el resto con el codigo TRWAGMYFPDXBNJZSQVHLCKE

- El numero obtenido marcará la posicion de la letra en el codigo, es decir que si el resto es 3, la letra del DNI sera la W

Ejemplo de uso:

	$ ./crearDNI 12345678
	$ El numero del DNI es 12345678Z
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char calculaDNI(char *dniUsuario);

int main(int argc, char *argv []){
	
	//- Crear el DNI de un ciudadano concatenando un número de 8 cifras que se le pasa cómo parametro del main y la letra correspondiente	
	char *dniUsuario = argv[1];
		
	char letra = calculaDNI(dniUsuario);
	
	char letraFinal[2] = {letra,'\0'};
	
	char dniUsuarioFinal[10];

	strcpy(dniUsuarioFinal,dniUsuario);
	strcat(dniUsuarioFinal, letraFinal);
	
	printf("El DNI del usuario es: %s\n", dniUsuarioFinal);
		
	return 0;
}


char calculaDNI(char *dniUsuario){
	
	//- Para obtener la letra, es necesario dividir el numero del DNI entre 23 y en lugar de calcular los decimales nos fijaremos en el resto de la ejecucion
	int letraDNI = atoi(dniUsuario) % 23;
	char letrasValidas[23] = "TRWAGMYFPDXBNJZSQVHLCKE";
	char letra = letrasValidas[letraDNI];
			
	return letra;
}