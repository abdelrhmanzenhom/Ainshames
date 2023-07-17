
package blackjack;


public class Card {
    private final int suit;
    private final int value;
    private final int rank;

    public Card(int suit, int value, int rank) {
        this.suit = suit;
        this.value = value;
        this.rank = rank;
    }
    
public Card(Card c)
{
    suit = c.suit;
    value=c.value;
    rank=c.rank;
}

  

    public int getSuit() {
        return suit;
    }

    public int getValue() {
        return value;
    }

    public int getRank() {
        return rank;
    }
    
    
    
}
