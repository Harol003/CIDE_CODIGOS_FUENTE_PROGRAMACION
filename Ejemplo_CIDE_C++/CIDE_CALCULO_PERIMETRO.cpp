/*
* Ejemplo de if y else
* Calcula la superficie o per�metro 
* de un cuadril�tero
*/
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
    /* declaraci�n de variables */ 
    int a, b, c, sup, per;
    
    /* Ingreso de lados del cuadril�tero */ 
    printf("Ingrese lado a en metros\n");
    scanf("%d", &a);
    printf("Ingrese lado b en metros\n");
    scanf("%d", &b);
    
    /* determino si es cuadrado o rect�ngulo */ 
    if(a == b) { // si ambos lados son iguales...
        printf("Es un cuadrado");  // informa que es un cuadrado
    } else { // si no...
        printf("Es un rectangulo"); // informa que es un rect�ngulo
    }
    
    /* Ingreso de tipo de c�lculo: superficie o per�metro */
    printf("\nCalcular la superficie (1) o per�metro (2)\n");
    scanf("%d", &c);
    if(c >= 1) {
        sup = a * b;
        printf("La superficie es de %d metros cuadrados", sup);
    } else {
        per = 2 * (a + b);
        printf("El perLa superficie es de %d metros cuadrados", sup);
    }
    printf("\nPresione una tecla para salir");
    getch();
    return 0;
}
