/*
 ============================================================================
 Name        : tp_[2].c
 Author      : ungim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 *  (!) El trabajo pr�ctico deber� ser entregado en el repositorio de GIT correspondiente al TP2 de la materia, el mismo deber� de ser realizado utilizando Eclipse. Recuerden que tiene que encontrarse en el mismo repositorio reportado, no en uno nuevo.
 *	(!) Si no cuenta con los archivos .cproject y .project el TP no se corregir�.
 *	(!) El TP debe contar, al menos, con la biblioteca correspondiente a la entidad y otra donde se encuentren los inputs.
 *	(!) Recuerden que si el TP no compila o rompe al momento de hacer alguna prueba se encuentra desaprobado.
 *	(!) No se deben modificar los prototipos de las funciones dadas en el enunciado
 *
 *  Una aerol�nea requiere un sistema para administrar los pasajeros de cada vuelo. Se sabe que
 *	no puede tener m�s de 2000 pasajeros.
 *	Datos:
 *
 *	El sistema deber� tener el siguiente men� de opciones:
 *	1. ALTAS: Se debe permitir ingresar un pasajero calculando autom�ticamente el
 *	n�mero de Id. El resto de los campos se le pedir� al usuario.
 *	2. MODIFICAR: Se ingresar� el N�mero de Id, permitiendo modificar: o Nombre o Apellido
 *	o Precio o Tipo de pasajero o C�digo de vuelo
 *	3. BAJA: Se ingresar� el N�mero de Id y se eliminar� el empleado del sistema.
 *	4. INFORMAR:
 * 	1. Listado de los pasajeros ordenados alfab�ticamente por Apellido y Tipo de pasajero.
 * 	2. Total y promedio de los precios de los pasajes, y cu�ntos pasajeros superan el precio
 *	promedio.
 *	3. Listado de los pasajeros por C�digo de vuelo y estados de vuelos �ACTIVO�.
 *
 *
 *	                               EL TP ESTA INCOMPLETO
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "inputsTp.h"

int main(void)
{
	setbuf(stdout, NULL);

	int respuesta;
	int respuestaSubMenu;
	int idBuscar;
	int posicionDada;
	int idBorrar;
	int indice;

	int largo = 2000;

	Passenger pasajeros[largo];
	initPassengers(pasajeros, largo);


	do
	{
		printf(	"\n1- Ingresar pasajero.\n"
				"2- Modificar pasajero.\n"
				"3- Eliminar pasajero.\n"
				"4- Informar pasajeros.\n"
				"5- Ingreso forzado de pasajeros.\n"
				"6- Salir.\n"
				"\nIngrese la opcion deseada: ");
		scanf("%d", &respuesta);
		fflush(stdin);

		switch(respuesta){

			case 1:


				indice = addPassenger(pasajeros, largo);

				if(indice == LLENO)
				{
					printf("El pasajero no se guardo");
				}
				else{
					printf("Pasajero guardado con el ID: %d",pasajeros[indice].id);
				}
				break;

			case 2:

				rellenarInt(&idBuscar,"Ingrese el numero de ID a modificar: ");

				posicionDada = findPassengerById(pasajeros, largo, idBuscar);

				do
				{
					printf(	"\n1- Modificar nombre: \n"
							"2- Modificar apellido: \n"
							"3- Modificar precio del vuelo: \n"
							"4- Modificar codigo de vuelo: \n"
							"5- Modificar tipo de vuelo: \n"
							"6- Salir.\n"
							"\nIngrese la opcion deseada: ");
							scanf("%d", &respuestaSubMenu);
							fflush(stdin);

				switch(respuestaSubMenu)
				{
				case 1:

					rellenarArray(pasajeros[posicionDada].name, "Ingrese el nombre del pasajero: \n");

					break;

				case 2:

					rellenarArray(pasajeros[posicionDada].lastName, "Ingrese el apellido del pasajero: \n");

					break;

				case 3:
					rellenarFloat(&pasajeros[posicionDada].price, "Ingrese el precio del vuelo: \n");

					break;

				case 4:

					rellenarArray(pasajeros[posicionDada].flycode, "Ingrese el codigo del vuelo: ");

					break;

				case 5:

					rellenarInt(&pasajeros[posicionDada].typePassenger, "Ingrese el tipo de pasajero: \n(1 = turista, 2 = ejecutiva): \n");

					break;
					//falta el estado del vuelo
			        //\n(1 = Activo, 2 = Cancelado): \n"
				case 6:

					printf("Saliendo del menu de modificacion.");

					break;

				default:

					printf("\nOpcion no valida.\n");

					break;

				}

				}while(respuestaSubMenu != 6);

				break;

			case 3:

				rellenarInt(&idBorrar, "Ingrese el ID a borrar: ");

				posicionDada = removePassenger(pasajeros, largo, idBorrar);

				break;
			case 4:

				//sortPassengers(pasajeros,largo,1);

				printPassenger(pasajeros,largo);

				break;

			case 5:


			case 6:

				printf("Saliendo del programa.");

				break;

			default:


				printf("\nOpcion no valida.\n");

				break;
		}


	}while(respuesta != 6);

	return 0;
}
