 #include <stdio.h>
 #include <string.h>
 /*
 “El 0 (cero) es el único valor falso en C”.
 La función strcmp devolverá 0 si las cadenas son iguales.
 En caso de que la primera sea “menor” que la segunda,devolverá un número negativo
 y finalmente si la primera es mayor que la segunda, devolverá un número positivo.
 */
 main() {
 char primerNombre[5];
 char segundoNombre[5];
 printf("Ingrese su nombre\n");
 gets(primerNombre);
 printf("Ingrese su segundo nombre\n");
 gets(segundoNombre);

 if( !(strcmp(primerNombre,segundoNombre)) ){
    printf("Sus dos nombres SON iguales");
 }
 else{
    printf("Sus dos nombres NO son iguales");
 }

 }

