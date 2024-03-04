#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - enumeration of card suits
 * @SPADE: Spades
 * @HEART: Hearts
 * @CLUB: Clubs
 * @DIAMOND: Diamonds
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - the playing card
 * @value: the value of the card
 * From "Ace" to "King"
 * @kind: the kind of the card
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - deck of card
 * @card: the pointer to card of the node
 * @prev: the pointer to previous node of the list
 * @next: the pointer to  next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
