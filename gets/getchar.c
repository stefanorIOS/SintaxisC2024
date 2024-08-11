#include <stdio.h>
/*Trabajo con char y string*/
 main ( )
 {
    /*
    ejemplo1
    char c;
    printf("Ingrese un char\n");
    //getche() y getch(). No requieren de <enter>. getchar <si>
    c = getche();
    printf("\nEste es su char\n");
    putchar(c);

    -------------------------------------------------------------------

    ejemplo2
    char nombre [20];
    printf("Ingrese su nombre y apellido\n");
    gets(nombre);
    printf("Aqui lo vera\n");
    puts(nombre);
    */

    //primera posicion 0 y final 3.
    char apodo [4];
    printf("Ingrese apodo\n");
    gets(apodo);
    printf("Aqui vera la posicion inicial\n");
    printf("Esta es la posicion inicial\n%c",apodo[0]);

 }
