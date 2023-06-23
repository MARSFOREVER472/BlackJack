#pragma once
#include "Card.h" // Encabezado de la clase carta.
#include <array> // Variable para los arreglos.

// Clase CardDeck
namespace cards 
{
	class CardDeck
	{
	// Métodos Públicos.
	public:
		CardDeck();
		~CardDeck();
		void print() const;
		void printShort() const;
		Card drawCard(); // Cartas extraídas.
		void shuffle(); // Mazo aleatorio de cartas.

	// Métodos privados.
	private:
		void swap(int first, int second); // Dos jugadores.
		std::array<Card, 52> cards; // Imprime el número total de cartas del mazo mediante arreglos.
		int currentCardIndex;
	};
}


