#pragma once
#include "pch.h"

enum class SUIT {
	HEARTS, DIAMONDS, SPADES, CLUBS
};

enum class VALUE {
	ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

class Card
{
private:
	Card() = delete;
	Card(SUIT suit, VALUE value) : Suit{ suit }, Value{value} {}
	SUIT Suit;
	VALUE Value;
public:
	Card TakeCard() { return Card{ SUIT::CLUBS, VALUE::TWO }; }
};
