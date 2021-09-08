
#include "interacciones.h"
#include <iostream>

void mostrarBienvenida() {

	std::cout << " A H O R C A D O " << std::endl;
}

void mostrarAhorcado(std::string descubierta, int vidasRestantes) {

	std::cout << descubierta
			  << std::endl
			  << "Te quedan "
			  << vidasRestantes
			  << " vidas para adivinar una palabra con "
			  << descubierta.length()
			  << " letras"
			  << std::endl;
}

void mostrarQueNoContiene(char letra) {

	std::cout << "La letra "
			  << letra
			  << " no está en la palabra, consumiste una vida"
			  << std::endl;
}

void mostrarResultado(int vidasRestantes) {

	if (vidasRestantes <= 0) {

		std::cout << "PERDISTE" << std::endl;

	} else {

		std::cout << "GANASTE" << std::endl;
	}
}

char arriesgarLetra() {

	char letra;

	std::cout << "Arriesgá una letra: ";
	std::cin >> letra;

	return letra;
}
