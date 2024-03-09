
#include "Card.h"
 

int main() {
	Card c1;
	Card c2(Card::EIGHT, Card::PIKI, true);
	c2.GetInfoCard();
	return 0;
}