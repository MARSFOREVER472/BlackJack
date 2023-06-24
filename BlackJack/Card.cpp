#include "Card.h"

namespace cards // Espacio de nombres de la clase cards.cpp y cards.h.
{
	// Elimina el constructor predeterminado...
	Card::Card() : invalid(true) // Debe elegir una carta correcta a su elección, es decir, será inválida al escoger una carta distinta.
	{
	}

	Card::Card(Suit s, Rank r) // Declara las iniciales con sus respectivos tipos de iniciales.
	{
		initialize(s, r);
	}

	Card::~Card() // Llama al destructor de la clase Card.
	{
	}

	void Card::initialize(Suit s, Rank r) // Declara los palos de cartas con sus respectivos números, y que siempre sean correctos.
	{
		suit = s;
		rank = r;
		invalid = false;
	}

	Suit Card::getSuit() const // Obtiene el palo de cartas (4 a elección).
	{
		return suit;
	}

	Rank Card::getRank() const // Obtiene cualquiera de los 13 números o letras de la carta.
	{
		return rank;
	}

	std::string Card::toString() const // Este método devuelve una cadena completa de sentencia de caracteres.
	{
		if (invalid) // Si es que no eligió una carta correcta.
		{
			return "Invalid Card"; // Carta no válida.
		}

		// Copy Paste de cards::toString (CardStruct card), en lugar de crear primero una CardStruct.
		return rankToString(rank) + " of " + suitToString(suit);
	}

	std::string Card::toStringShort() const // Método que devuelve una sentencia corta de caracteres.
	{
		// Copiar y pegar, igual que toString.
		return suitToString(suit)[0] + std::to_string(rank);;
	}

}
