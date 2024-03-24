#ifndef CARD_H
#define CARD_H

class Card {
public:
	enum cost {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK	= 10, QUEEN = 10, KING = 10};
	enum suit {PIKI, BOOBNI, CHERVI, TREFI};
	Card();
	Card(cost c, suit s, bool is);
	void Flip();
	int GetInfoCard();
private:
	cost card_cost;
	suit card_suit;
	bool isUp;
};

#endif //CARD_H
