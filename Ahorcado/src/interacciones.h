#ifndef INTERACCIONES_H_
#define INTERACCIONES_H_

#include <string>

/*
 * Indica el inicio del programa.
 */
void mostrarBienvenida();

/*
 * Describe el estado del juego.
 */
void mostrarAhorcado(std::string descubierta, int vidasRestantes);

/*
 * Indica al usuario que 'letra' no está en la palabra secreta.
 */
void mostrarQueNoContiene(char letra);

/*
 * Indica al usuario cómo finalizó el juego.
 */
void mostrarResultado(int vidasRestante);

/*
 * Solicita al usuario arriesgar una letra y devuelve la letra que arriesgada.
 */
char arriesgarLetra();

#endif /* INTERACCIONES_H_ */
