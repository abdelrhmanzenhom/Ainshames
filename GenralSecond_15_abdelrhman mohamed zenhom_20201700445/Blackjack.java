
package blackjack;

import java.util.Scanner;


public class Blackjack {

   static Game game=new Game();
    public static void main(String[] args) {
        GUI gui = new GUI();
        Scanner in=new Scanner(System.in);
   game.generatCard();
   game.setinformation();
   gui.runGUI( game.carddeck, game.players[0].getCard(), game.players[1].getCard(), game.players[2].getCard(), game.players[3].getCard() );
   for(int i=0;i<3;i++){
   System.out.println(game.players[i].Name+ " current score is = "+game.players[i].Score);
   System.out.println("if you want to hit player "+game.players[i].Name+" click one if you want to stand click two: ");
  
   
   
   
   boolean f=true;
   while(f==true){
       int choice=in.nextInt();
   switch(choice)
   {
       case 1:
           Card car=new Card(game.Drawcard());
           game.players[i].addcard(car);
           gui.updatePlayerHand(car,i);
           if(game.players[i].Score>21){System.out.println("player is busted");f=false;}
           System.out.println("your new score is = "+game.players[i].Score);
      
           break;
       case 2:
           System.out.println(game.players[i].Name+" final score is = "+game.players[i].Score);
           f=false;
           break;
   }
   }}
   game.gamemaxscore();
   
   int wh=game.highs;
    System.out.println("the max score = "+game.highs);
    boolean flag=true;
    while(game.players[3].Score<wh){
    Card car=new Card(game.Drawcard());game.players[3].addcard(car);
    gui.updateDealerHand(car,game.carddeck);
    if(game.players[3].Score>21){System.out.println("dealer is busted");flag=false;break;}
    }int cntt=0;String draw=" ";
    if(flag==true){System.out.println("Dealer is winner");}
    else if(flag==true&&wh==game.players[3].Score){System.out.println("PUSH");}
    
    else {for(int i=0;i<3;i++){
    if(wh==game.players[i].Score){cntt++;draw=game.players[i].Name;}}}if(cntt>1){System.out.println("PUSH");}
    else if(flag==true){}
    else System.out.println("the winner is "+draw);
        
    
    }}
   
    
    

