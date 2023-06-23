#include "cards.h" // Archivo de encabezado para la clase cards.

std::string cards::suitToString(Suit suit) // Para los palos de cartas.
{
	switch (suit) // Se divide por 4 palos de cartas.
	{
	case cards::CLUBS:                 return "clubs"; // Tréboles.
	case cards::DIAMONDS:      return "diamonds"; // Diamantes.
	case cards::HEARTS:                return "hearts"; // Corazones.
	case cards::SPADES:                return "spades"; // Picas.
	default:
		return std::string();
	}
}

std::string cards::rankToString(Rank rank) // Para los números de cada carta.
{
	switch (rank)
	{
	case cards::TWO:           return "two"; // 2
	case cards::THREE:           return "three"; // 3
	case cards::FOUR:           return "four"; // 4
	case cards::FIVE:           return "five"; // 5
	case cards::SIX:           return "six"; // 6
	case cards::SEVEN:           return "seven"; // 7
	case cards::EIGHT:           return "eight"; // 8
	case cards::NINE:           return "nine"; // 9
	case cards::TEN:           return "ten"; // 10
	case cards::JACK:           return "jack"; // J
	case cards::QUEEN:           return "queen"; // Q
	case cards::KING:           return "king"; // K
	case cards::ACE:           return "ace"; // A
	default:
		return std::string();
	}
}

std::string cards::toString(CardStruct card)
{
	return rankToString(card.r) + " of " + suitToString(card.s); // Ej: Dos de tréboles (sentencia completa).
}

std::string cards::toStringShort(CardStruct card)
{
	return suitToString(card.s)[0] + std::to_string(card.r); // Todas las enumeraciones tienen un valor numérico, comenzando con un TW0 = 2, THREE = 3, y así sucesivamente.
}

