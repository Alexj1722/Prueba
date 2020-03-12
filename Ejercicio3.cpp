#include <stdio.h>
#include <stdlib.h>

int menu(int);
int opcion1(int);
int opcion2(int);
int calculo(int, int);

int main(){
	int opcion;

	if (menu(opcion) == 1)
		return opcion1(opcion);
	else if(menu(opcion)== 2)
		return opcion2(opcion);

	
}
int calculo(int horas, int tipo){
	return horas * tipo;
}

int menu(int opcion)
{	
	
	int tipo;
	int horas;
	int salir;
	printf("-----------Bienvenido----------------\n");
	printf("1. Calcular\n");
	printf("2. Salir\n");
	printf("Ingrese el numero de opcion: \n");
	scanf("%d",&opcion);
	
	return opcion;
}

int opcion1(int opcion)
{
		
	
	int tipo;
	int horas;
	int salir;
	printf ("Elija el Tipo de moto:\n1: Tipo A valor por hora 200, valor adicional 50\n2: Tipo B valor por hora 300, valor adicional 100");
	printf("\n3: Tipo C valor por hora 350 valor adicional 150\n4: Tipo D valor por hora 400, valor adicional 150\n");
	scanf("%d",&tipo);
	if (tipo == 1){
		printf("Ingrese el numero de horas: ");
		scanf("%d",&horas);
	}
}

int opcion2(int opcion)
	{
	
 	int salir;
	printf("¿Desea salir? Si(1) / No(0)");
	scanf("%d",&salir);
	if(salir == 1)
		return 0;
	else if(salir == 0)
		return menu(opcion);
}
	
