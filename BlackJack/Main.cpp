#include <iostream> // Librería iostream
#include "cards.h" // Clase de encabezado de cards.h
#include "CardDeck.h" // Clase de encabezado CardDeck.h
#include "BlackJack.h" // Clase de encabezado BlackJack.h
#include <random> // Importar una variable aleatoria.
#include <time.h> // Importar un contador de tiempo.

using namespace cards;

int main() {
	CardStruct card;
	card.r = Rank::EIGHT; // Ranking número 8.
	card.s = Suit::DIAMONDS; // Palo de diamantes.

	std::cout << suitToString(card.s) << std::endl; // Diamantes.
	std::cout << rankToString(card.r) << std::endl; // Ocho.
    std::cout << toString(card) << std::endl; // Ocho de diamantes en cadena completa de caracteres.
	std::cout << toStringShort(card) << std::endl; // Ocho de diamantes en cadena corta de caracteres.

	// Se genera un mazo aleatorio de cartas.

	srand(time(0));

	CardDeck deck; // Variable para el mazo de cartas.
	deck.print(); // Se imprime el mazo de cartas a generar.
	std::cout << std::endl << std::endl;
	deck.shuffle(); // Se genera un mazo aleatorio.
	deck.print(); // Imprime el mazo aleatorio.
	std::cout << std::endl << std::endl;

	// Si es que está corriendo el juego.

	bool running = true;

	// Mientras corre el juego recorriendo mediante un ciclo while.

	while (running)
	{
		blackjack::BlackJack blackj;
		std::cout << "Has " << (blackj.playGame() ? "ganado" : "perdido") << std::endl; // Has ganado o has perdido?

		char ans;
		std::cout << "Jugar otra vez? (y/n)" << std::endl;
		std::cin >> ans;
		running = ans == 'y' || ans == 'Y';
	}
}
