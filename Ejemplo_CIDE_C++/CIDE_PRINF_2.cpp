/* c�mo mostrar caracteres especiales (acentos, etc.) en consola de windows */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {
    printf("Buen d\0241a!\n"); // 0241 es el ASCII de � en octal (
    getch();
    printf("Buen d%ca!\n",161);  // %c se reemplaza por el c�digo ascii 161 -> i con acento
    getch();
    printf("%c",160); // �
    printf("%c",130); // �
    printf("%c",161); // �
    printf("%c",162); // �
    printf("%c",163); // �
    return 0;
}
