#pragma once
#include <string> // Variable de caracteres a importar.

// No es una clase, sino un espacio de nombres para las clases.

namespace cards
{
	// Clasificaremos los 4 palos de cartas mediante una variable de tipo enum.
	enum Suit {
		CLUBS, DIAMONDS, HEARTS, SPADES
	};

	// Clasificaremos los números de cartas independientemente de los palos cualquiera, también de tipo enum.
	enum Rank {
		TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
	};

	std::string suitToString(Suit suit); // Para los palos de cartas del mazo.
	std::string rankToString(Rank rank); // Para los números o letras de las cartas del mazo.

	// Definimos la estructura de la carta con sus respectivas iniciales.
	struct CardStruct
	{
		Suit s;
		Rank r;
	};

	std::string toString(CardStruct card);
	std::string toStringShort(CardStruct card);
};

