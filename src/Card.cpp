#include "Card.h"

Card::Card() {
	card_cost = ACE;
	card_suit = PIKI;
	isUp = true;
}

Card::Card(cost c, suit s, bool is) {
	this->card_cost = c;
	this->card_suit = s;
	this->isUp = is;
}

void Card::Flip() {
	isUp = !(isUp);
}

int Card::GetInfoCard() {
	if (isUp) return card_cost;
}
