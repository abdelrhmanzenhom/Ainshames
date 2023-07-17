
package blackjack;


public class Player {
    public String Name;
    public int Score=0;
    private Card[] card=new Card[11];
    boolean winrnot;
    boolean lornot;
    int cnt=0;
    
public void addcard(Card ra)
{ if(cnt<11&&Score<=21){
    card[cnt]=ra;
    Score=Score+ra.getValue();
   cnt++; }
}
    public String getName() {
        return Name;
    }

    public Card[] getCard() {
        return card;
    }
    
    
    
}
