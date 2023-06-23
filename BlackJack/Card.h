#pragma once
#include "cards.h" // Importamos el encabezado para este otro encabezado.
#include <string> // Importamos una variable de caracteres.

namespace cards
{
	class Card
	{
	public: // M�todos p�blicos.
		Card();
		Card(Suit s, Rank r);
		~Card();
		void initialize(Suit s, Rank r);
		Suit getSuit() const; // Marca como const, porque la funci�n no debe cambiar el objeto de la carta.
		Rank getRank() const;
		std::string toString() const; // Cadena infinita de caracteres.
		std::string toStringShort() const; // Cadena corta de caracteres.

	private: // M�todos privados.
		Rank rank; // Ranking.
		Suit suit; // Palo de cartas.
		bool invalid; // Si se ingres� alg�n dato incorrecto.
	};
}


