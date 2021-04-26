/*
	  Un ejemplo con condicionales (if)
  
      Este programa calcula la superficie de varias figuras
      Presenta un "men��" de opciones para elegir figura y luego
      solicita el ingreso de los datos necesarios.
  */
/*CIDE FUNDAMENTOS DE PROGRAMACION HHTN*/
  #include <stdio.h>
  #include <stdlib.h>
  
  /* definimos PI como constante */
  #define PI 3.14159
  
  int main() {
      char opcion = 0;
      float base, altura;
      float superficie = 0;
  
      /* presenta men�; de opciones */
      printf("C�lculo de vol�men\n");
      printf("Seleccione una opci�;n:\n");
      printf("T --> Tr�ngulo\n");
      printf("C --> Cuadrado\n");
      printf("R --> Rect�ngulo\n");
      printf("L --> C�rculo\n");
  
      /* ingresa opción */
      scanf("%c", &opcion);
  
      if (opcion == 'T'){
          /* si la opción es T (triángulo)... */
          printf("Ingrese Base: ");
          scanf("%f", &base);
          printf("Ingrese Altura: ");
          scanf("%f", &altura);
  
          superficie = (base * altura) / 2.0;
      } else if (opcion == 'C') {
          /* si la opción es C (Cuadrado)... */
          printf("Ingrese lado: ");
          scanf("%f", &base);
  
          superficie = base * base;
      } else if (opcion == 'R') {
          /* si la opción es R (Rect�ngulo)... */
          printf("Ingrese Base: ");
          scanf("%f", &base);
          printf("Ingrese Altura: ");
          scanf("%f", &altura);
  
          superficie = (base * altura);
      } else if (opcion == 'L') {
           /* si la opción es L (C�rculo)... */
          printf("Ingrese radio: ");
          scanf("%f", &base);
  
          superficie = PI * base * base;
      } else {
           /* si la opción es inv�lida... */
           printf("La opci�n es incorrecta\n");
      }
  
      if (superficie > 0){
          /* Si la superficie calculada es v�lida, muestra resultado */
          printf("La superficie es %f\n", superficie);
      }

      return 0;
  }
