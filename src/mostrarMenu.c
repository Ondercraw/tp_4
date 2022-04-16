/*
 * mostrarMenu.c
 *
 *  Created on: 12 abr. 2022
 *      Author: ungim
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarMenu(int opcionIngresada)
{
	printf("\n1. Ingresar Kilómetros: \n"
			"\n2. Ingresar Precio de Vuelos:\n"
			"\n3. Calcular todos los costos \n"
			"\n4. Informar Resultados\n"
			"\n5. Carga forzada de datos\n"
			"\n6. Salir\n");

		printf("\nIngrese una opcion:");
		scanf("%d", &opcionIngresada);

return opcionIngresada;
}

/// @fn float mostrarMenu(int)
/// @brief Se encarga de mostrar el menu de opciones.
/// @param opcionIngresada
/// @return la opcion ingresada del menu

float mostrarResultados(float km, float precioAerolineas, float precioLatam, float descuentoA, float interesA, float precioConBitcoinA, float precioUnitarioA, float descuentoL, float interesL, float precioConBitcoinL, float precioUnitarioL, float diferencia)
{

	printf("\nKMs Ingresados: %.2f "
	            "\n\nPrecio Aerolineas: $ %.2f"
	            "\na) Precio con tarjeta de debito: $ %.2f"
	            "\nb) Precio con tarjeta de credito: $ %.2f"
	            "\nc) Precio pagando con bitcoin: $ %.7f"
	            "\nd) Mostrar precio unitario: $ %.2f"
	            "\n\nPrecio Latam: $ %.2f"
	            "\na) Precio con tarjeta de debito: $ %.2f"
	            "\nb) Precio con tarjeta de credito: $ %.2f"
	            "\nc) Precio pagando con bitcoin: $ %.7f"
	            "\nd) Mostrar precio unitario: $ %.2f"
	            "\n\n Diferencia: %.2f", km, precioAerolineas, descuentoA, interesA, precioConBitcoinA, precioUnitarioA, precioLatam, descuentoL, interesL, precioConBitcoinL, precioUnitarioL, diferencia);

	return 0;
}

/// @fn float mostrarResultados(float , float , float , float , float , float , float , float , float , float , float , float)
/// @brief Se encarga de mostrar los resultados de todos los calculos.
/// @param km
/// @param precioAerolineas
/// @param precioLatam
/// @param descuentoA
/// @param interesA
/// @param precioConBitcoinA
/// @param precioUnitarioA
/// @param descuentoL
/// @param interesL
/// @param precioConBitcoinL
/// @param precioUnitarioL
/// @param diferencia
/// @return todos los precios ya calculados


