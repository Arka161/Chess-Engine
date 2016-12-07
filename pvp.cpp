#include<iostream>
using namespace std;
typedef unsigned long long u64;
class cboard
{
  private :
  u64 WKnights;
  u64 WPawns ;
  u64 WRooks ;
  u64 WBishops;
  u64 WKing;
  u64 WQueen;
  u64 BKnights;
  u64 BPawns ;
  u64 BRooks ;
  u64 BBishops;
  u64 BKing;
  u64 BQueen;
  u64 wboard;
  u64 bboard;
  u64 tboard;
  u64 pieces[64];
  public :
  	cboard()
  	{            
  	
  	//NOTE: We could also create different values for every piece to make it simple while printing the board
  		WKnights  =0100001000000000000000000000000000000000000000000000000000000000;
  		WPawns    =0000000011111111000000000000000000000000000000000000000000000000;
  		WRooks    =1000000100000000000000000000000000000000000000000000000000000000;
  		WBishops  =0010010000000000000000000000000000000000000000000000000000000000;
  		WKing     =0000100000000000000000000000000000000000000000000000000000000000;
  		WQueen    =0001000000000000000000000000000000000000000000000000000000000000;
  		BKnights  =0000000000000000000000000000000000000000000000000000000001000010;
  		BPawns    =0000000000000000000000000000000000000000000000001111111100000000;
  		BRooks    =0000000000000000000000000000000000000000000000000000000010000001;
  		BBishops  =0000000000000000000000000000000000000000000000000000000000100100;
  		BKing     =0000000000000000000000000000000000000000000000000000000000001000;
  		BQueen    =0000000000000000000000000000000000000000000000000000000000010000;
		int i ;
		u64 x;
		for(i=0;i<64;i++)
		{	
	        x=pow(2,i);
		pieces[63-i]=  x;  // Each index has a bitboard for piece (ie) a1 ,b1 , c1 and so on 
	        }
	}	
	u64 total_board()
	{
		
		wboard=WKnights|WPawns|WRooks|WBishops|WKing|WQueen;
		bboard=BKnights|BPawns|BRooks|BBishops|BKing|BQueen;
		tboard=wboard|bboard;
	}
	
	u64 pawn_moves()
	{
		//suppose we are moving pawn a2. White pawn. 
		WPawns=WPawns<<8;   //Number of shifting positions will vary with the pawn taken 
		u64 oroperand=10000000000000000000000000000000;
		u64 oropshift=oroperand>>8;
		WPawns= WPawns | oropshift;
		u64 andoper; 
		andoper=~oroperand;
		WPawns=WPawns & andoper; 
		WPawns=WPawns>>8;
	
	}
	
	
	
	
};

int main()
{

return 0;

}
