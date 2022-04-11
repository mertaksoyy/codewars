/*Let's play! You have to return which player won! 
In case of a draw return Draw!.
*/

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};


enum outcome rps (enum tool p1, enum tool p2)
{
  if(p1 == ROCK && p2 == PAPER)
    return P2_WON;
  else if(p1 == ROCK && p2 == SCISSORS)
    return P1_WON;
  else if(p1 == PAPER && p2 == ROCK)
    return P1_WON;
  else if(p1 == PAPER && p2 == SCISSORS)
    return P2_WON;
  else if(p1 == SCISSORS && p2 == ROCK)
    return P2_WON;
  else if(p1 == SCISSORS && p2 == PAPER)
    return P1_WON;

  return DRAW;
}
