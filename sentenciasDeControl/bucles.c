 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 /*

 */
 main() {
    int cantidadLetras;
    char rta[3];
    char rtaOriginal[] = "NO";
    int c;


    for (c=1;c<5;c++){
    printf("Usted seguira jugando hasta que escriba un NO\n");
    printf("Ingrese su respuesta\n");
    gets(rta);

    if( !(strcmp(rta,rtaOriginal)) ){
        printf("Ya puede dejar de jugar\n");
        c=10;
    }
    else{
        printf("siga jugando\n");
        printf("Intento numero <%i>\n", c);
    }

    }

    printf("Acabo su juego :)\n");
    printf("Gracias por jugar\n");
 }

