/*
Gestión de biblioteca

- Máximo de 10 libros
- Libro:
	- Titulo (20 char)
	- ISBN (13 char)
	- num pags
	- editorial (20char)
	- autor
- Autor:
	- nombre (10 char)
	- apellido (10 char)
	- nacionalidad (10 char)
	
Se debe mostrar un menu que permita, añadir libros y mostrarlos todos

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
	OTONIO, INVIERNO, PRIMAVERA, VERANO
} estaciones_e;

typedef struct {
	
	char nombre [10];
	char apellido [10];
	char nacionalidad [10];
	
} autor_t;

typedef struct {

	char titulo [20];
	char isbn [13];
	int nPags;
	char editorial [20];
	autor_t autor;

} libro_t;


typedef struct {

	char titulo [20];
	char isbn [13];
	int nPags;
	char editorial [20];
	autor_t *autor;

} libro2_t;

void main(int argc, char *argv []){
	
	libro_t libro;
	//libro_t *pLibro;
	autor_t autor;
	libro2_t libro2;
	
	strcpy(libro.titulo, "El Quijote y Sancho");
	strcpy(libro.isbn, "ABCDEFGHIJKL");
	libro.nPags = 200;
	strcpy(libro.editorial, "Anaya");
	
	/*strcpy(pLibro->titulo, "El Quijote Puntero");
	strcpy(pLibro->isbn, "ABCDEFGPUNTERO");
	pLibro->nPags = 200;
	strcpy(pLibro->editorial, "AnayaPuntero"); Para poder ver los datos por consola de un puntero a struct, primero hay que reservar memoria para ello!!!!*/
	
	strcpy(autor.nombre, "Sergio");
	strcpy(autor.apellido, "Garcia");
	strcpy(autor.nacionalidad, "Espana");
	
	printf("El titulo del libro es %s, su ISBN es %s, tiene un total de %d hojas y la editorial es %s y el autor es %s %s %s \n", libro.titulo, libro.isbn, libro.nPags, libro.editorial, autor.nombre, autor.apellido, autor.nacionalidad);
	//printf("El titulo del libro puntero es %s, su isbn es %s, tiene un total de %d paginas y su editorial es %s", pLibro->titulo, pLibro->isbn, pLibro->nPags, pLibro->editorial);
	
	libro2.autor = &autor;
	
	strcpy(libro2.autor->nombre,"Sergieteee");
	printf("El nombre del autor del puntero es %s\n", libro2.autor->nombre); 
	
	
	estaciones_e estacion;
	
	estacion = INVIERNO;
	
	if(estacion == INVIERNO){
		printf("La estacion es INVIERNO\n");
	}else {
		printf("La estacion no es invierno\n");
	}
	
	
}