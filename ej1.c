#include<stdio.h>
#include<conio.h>
int main()
{ int n; printf("Ingrese un valor "); scanf("%i", &n); int a=0, b=1;
  for (int f=0; f<=n; f++) { printf("%i ", a); int c=a+b; a=b; b=c;}
  getchar(); return 0; }
