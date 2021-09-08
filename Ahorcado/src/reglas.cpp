
#include "reglas.h"
#include "interacciones.h"

int descubrir(char letra, std::string& descubierta, std::string secreta) {

	int ocurrencias = 0;
	for (unsigned int i = 0; i < secreta.length(); i++) {

		if (letra == secreta[i]) {

			descubierta[i] = letra;
			ocurrencias++;
		}
	}

	return ocurrencias;
}

void actualizar(int& vidasRestantes, int ocurrencias, char letraArriesgada) {

	if (ocurrencias == 0) {

		vidasRestantes--;

		mostrarQueNoContiene(letraArriesgada);
	}
}

bool sigueJugando(int vidasRestantes, std::string palabraDescubierta,
				  std::string palabraSecreta) {

	return (vidasRestantes > 0) && (palabraDescubierta != palabraSecreta);
}

std::string ocultar(std::string palabra) {

	std::string oculta = "";

	for (unsigned int i = 0; i < palabra.length(); i++) {

		oculta = oculta + "-";
	}

	return oculta;
}
