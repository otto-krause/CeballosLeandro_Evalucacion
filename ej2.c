#include<stdio.h>
#include<conio.h>
int main()
{ int a, b; printf("Ingrese el valor a y el valor b: "); scanf("%i %i", &a, &b);
  int f=0; while (a>=b) {a-=b; f++;} printf("El resto es %i: \n", a); printf("El cociente es %i: ", f);
  getchar(); return 0;
}
