#pragma once
#include "Card.h" // Encabezado de la clase carta.
#include <array> // Variable para los arreglos.

// Clase CardDeck
namespace cards 
{
	class CardDeck
	{
	// M�todos P�blicos.
	public:
		CardDeck();
		~CardDeck();
		void print() const;
		void printShort() const;
		Card drawCard(); // Cartas extra�das.
		void shuffle(); // Mazo aleatorio de cartas.

	// M�todos privados.
	private:
		void swap(int first, int second); // Dos jugadores.
		std::array<Card, 52> cards; // Imprime el n�mero total de cartas del mazo mediante arreglos.
		int currentCardIndex;
	};
}


