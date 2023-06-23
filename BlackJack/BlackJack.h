#pragma once

#include "CardDeck.h" // Encabezado de la clase CardDeck

// Encabezado de la clase BlackJack.

namespace blackjack
{
	class BlackJack
	{
	public: // Métodos públicos.
		BlackJack();
		~BlackJack();

		// Retorna verdadero si gana el juego.
		bool playGame();

	private: // Métodos privados.
		// Esto debería de estar en la clase Card, o en una función miembro.
		bool isAce(cards::Card* card); // Si la carta elegida es un As.
		int getCardValue(cards::Card* card); // Obtiene un valor de la carta elegida.
		int getPlayerCardValue(cards::Card* card); // Obtiene un valor de la carta elegida del jugador.
		int getDealerCardValue(cards::Card* card, int handValue); // Obtiene un valor al repartir las cartas elegidas.
		bool askPlayerDrawCard(); // Pregunta si es que la carta elegida ha sido robada por otro jugador u oponente.
		void drawInitialCards(); // Robo de cartas con sus respectivas iniciales.

		cards::CardDeck deck; // Mazo de cartas

		// Esto huele a clase de mano...

		// Jugador.
		unsigned int playerHand; // Mano del jugador.
		unsigned int playerCardsDrawn; // Cartas del jugador extraídas.

		// Repartidor de cartas.
		unsigned int dealerHand; // Mano del repartidor de la baraja.
		unsigned int dealerCardsDrawn; // Cartas del repartidor de la baraja extraídas.

	};
}
