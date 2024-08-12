 #include <stdio.h>
 #include <string.h>
 main() {
 char nombre[] = "ab";
 char linea[10];
 /*
 printf("Ingrese una cadena <hasta 5 caracteres>: ", linea);
 fgets(linea, 6, stdin); // permite el ingreso de un string de hasta 5 caracteres
 printf("\nCadena ingresada: %s", linea);
 printf("\nLargo de la cadena: %d", strlen(linea));
 printf("\nposicion final: %c", linea[4]);
 */
 printf("Esta cadena tiene %d caracteres usando <sizeof>", sizeof(nombre));
printf("\nEsta cadena tiene %d caracteres usando <strlen>", strlen(nombre));
 }
