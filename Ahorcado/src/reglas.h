
#ifndef REGLAS_H_
#define REGLAS_H_

#include <string>

/*
 * Descubre las ocurrencias de la letra en la palabra 'secreta', actualizando
 * la palabra 'descubierta' y devuelve la cantidad de apariciones.
 */
int descubrir(char letra, std::string& descubierta, std::string secreta);

/*
 * Según la cantidad de ocurrencias de la letraArriesgada en la
 * palabra secreta consume o no una vida.
 */
void actualizar(int& vidasRestantes, int ocurrencias, char letraArriesgada);

/*
 * Devuelve si el ahorcado aún no terminó.
 */
bool sigueJugando(int vidasRestantes, std::string palabraDescubierta,
				  std::string palabraSecreta);

/*
 * Devuelve una versión oculta de 'palabra'.
 */
std::string ocultar(std::string palabra);

#endif /* REGLAS_H_ */
