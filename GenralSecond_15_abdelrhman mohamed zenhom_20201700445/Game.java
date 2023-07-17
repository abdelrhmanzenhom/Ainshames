
package blackjack;
import java.util.Random;
import java.util.Scanner;

public class Game {
    Scanner in=new Scanner(System.in);
    public Player[] players=new Player[4];
    public Card[] carddeck=new Card[52];
    public int highs=0;
    private static final Random random = new Random();
    int randomChoice =random.nextInt(52);
    Card copy;
    
    public void generatCard()
    {int numofthecard=0;
        for(int i=0;i<4;i++){for(int j=0;j<13;j++){if(j>=10){carddeck[numofthecard]=new Card(i,10,j);}
    else{carddeck[numofthecard]=new Card(i,j+1,j);}numofthecard++;
    }}
        
    }
    public Card Drawcard()
    {
        while(true)
        {
            int randomChoice=random.nextInt(52);
            if(carddeck[randomChoice]!=null){
                copy= new Card(carddeck[randomChoice]);
            carddeck[randomChoice]=null;
            break;
            }
        }
        return copy;
        
    }
   
    public void setinformation()
    {int playerturn=0;
        for(int i=0;i<3;i++){System.out.println("enter ur name"+i+" : ");players[playerturn]=new Player();players[playerturn].Name=in.next();
    for(int j=0;j<2;j++){
    players[playerturn].addcard(Drawcard());
    }playerturn++;
  
        }
        players[3]=new Player();
         players[3].Name="dealer";
    players[3].addcard(Drawcard());
    players[3].addcard(Drawcard());
        
    }
    public void gamemaxscore()
    {
        for(int i=0;i<3;i++){if(highs<players[i].Score&&players[i].Score<=21)
            highs=players[i].Score;}
    } 
            
         
    
    
        
        }
    
    

