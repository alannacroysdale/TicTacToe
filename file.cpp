#include <iostream>

using namespace std;

//define each spot on board
string ia = " ";
string iia = " ";
string iiia = " ";
string ib = " ";
string iib = " ";
string iiib = " ";
string ic = " ";
string iic = " ";
string iiic = " ";
//initiate variable turn to start with x
int turn = 1;
string input = " ";

void printBoard()
{
  //prints board
  cout << "   a b c" << endl;
  cout << "i  " + ia + " " + ib + " " + ic << endl;
  cout << "ii " + iia + " " + iib + " " + iic << endl;
  cout << "iii" + iiia + " " + iiib + " " + iiic << endl;
}
void move()
{
  int again = 1;
  cin >> input;
  //if it is x's turn
  if (turn == 1)
    {
      if (input == "ia" && /*if move is valid*/ ia == " ")
	{
	  ia = "x";
	  again = 1;
	}
      else if (input == "ib" && ib == " ")
	{
	  ib = "x";
	  again = 1;
	}
      else if (input == "ic" && ic == " ")
	{
	  ic = "x";
	  again = 1;
	}
      else if (input == "iia" && iia == " ")
	{
	  iia = "x";
	  again = 1;
        }
      else if (input == "iib" && iib == " ")
	{
	  iib = "x";
	  again = 1;
	}
      else if (input == "iic" && ic == " ")
	{
	  iic = "x";
	  again = 1;
	}
      else if (input == "iiia" && iiia == " ")
	{
	  iiia = "x";
	  again = 1;
	}
      else if (input == "iiib" && iiib == " ")
	{
	  iiib = "x";
	  again = 1;
	}
      else if (input == "iiic" && iiic == " ")
	{
	  iiic = "x";
	  again = 1;
	}
      //if an invalid move was entered, it is still x's turn
      else
	{
	  again = 0;
	}
      //if a valid move was entered, it is now o's turn
      if (again != 0)
	{
	  turn = 0;
        }
    }
  else
    {
      if (input == "ia" && ia == " ")
	{
	  ia = "o";
	  again = 1;
	}
      else if (input == "ib" && ib == " ")
	{
	  ib = "o";
	  again = 1;
	}
      else if (input == "ic" && ic == " ")
	{
	  ic = "o";
	  again = 1;
	}
      else if (input == "iia" && iia == " ")
	{
	  iia = "o";
	  again = 1;
	}
      else if (input == "iib" && iib == " ")
	{
	  iib = "o";
	  again = 1;
	}
      else if (input == "iic" && iic == " ")
	{
	  iic = "o";
	  again = 1;
	}
      else if (input == "iiia" && iiia == " ")
	{
	  iiia = "o";
	  again = 1;
	}
      else if (input == "iiib" && iiib == " ")
	{
	  iiib = "o";
	  again = 1;
	}
      else if (input == "iiic" && iiib == " ")
	{
	  iiic = "o";
	  again = 1;
	}
      else
	{
	  again = 0;
	}
      if (again != 0)
	{
          turn = 1;
	}
    }
}
bool checkXWin()
{
  //checks to see if x has won, vertically, horizontally or diagonally
  if (ia == "x" && ib == "x" && ic == "x")
    {
      return true;
    }
  if (iia == "x" && iib == "x" && iic == "x")
    {
      return true;
    }
  if (iiia == "x" && iiib == "x" && iiic == "x")
    {
      return true;
    }
  if (ia == "x" && iia == "x" && iiia == "x")
    {
      return true;
    }
  if (ib == "x" && iib == "x" && iiib == "x")
    {
      return true;
    }
  if (ic == "x" && iic == "x" && iiic == "x")
    {
      return true;
    }
  if (ia == "x" && iib == "x" && iiic == "x")
    {
      return true;
    }
  if (iiia == "x" && iib == "x" && ic == "x")
    {
      return true;
    }
  return false;
}
bool checkOWin()
{
  if (ia == "o" && ib == "o" && ic == "o")
    {
      return true;
    }
  if (iia == "o" && iib == "o" && iic == "o")
    {
      return true;
    }
  if (iiia == "o" && iiib == "o" && iiic == "o")
    {
      return true;
    }
  if (ia == "o" && iia == "o" && iia == "o")
    {
      return true;
    }
  if (ib == "o" && iib == "o" && iiib == "o")
    {
      return true;
    }
  if (ic == "o" && iic == "o" && iiic == "o")
    {
      return true;
    }
  if (ia == "o" && iib == "o" && iiic == "o")
    {
      return true;
    }
  if (iiia == "o" && iib == "o" && ic == "o")
    {
      return true;
    }
  return false;
}
bool checkTie()
{
  //checks if all places on board are full and neither player has won (tie)
  if (ia != " " && iia != " " && iiia != " " && ib != " " && iib != " " && iiib != " " && ic != " "
      && iic != " " && iiic != " " && checkXWin() == false && checkOWin() == false)
    {
      return true;
    }
  return false;
}
void clearBoard()
{
  //resets board (removes all x's and o's)
  ia = " ";
  ib = " ";
  ic = " ";
  iia = " ";
  iib = " ";
  iic = " ";
  iiia = " ";
  iiib = " ";
  iiic = " ";
}
int main()
{
  bool stillPlaying = true;
  int xWins = 0;
  int oWins = 0;
  while (stillPlaying == true)
    {
      turn = 1; //sets turn to x at the beginning of every round
      cout << "Welcome to Tic Tac Toe. Enter ia, iia, iiia, ib, iib, iiib, ic, iic or iiic to place a move." << endl;
      if (xWins >= 2)
	{
	  cout << "X has " << xWins << " wins." << endl;
	}
      if (xWins == 1)
	{
	  cout << "X has 1 win." << endl;
	}
      if (oWins >= 2)
	{
	  cout << "O has " << oWins << " wins." << endl;
	}
      if (oWins == 1)
	{
	  cout << "O has 1 win." << endl;
	}
      //while neither player has won and the game has not resulted in a tie, the game continues
      while (checkXWin() == false && checkOWin() == false && checkTie() == false)
        {
          printBoard();
          move();
        }
      //prints the winning move
      printBoard();
      //tells the players who won or if the game was a tie
      //adds to the winnning totals
      if (checkXWin() == true)
	{
	  xWins++;
	  cout << "X won!" << endl;
	}
      if (checkOWin() == true)
	{
	  oWins++;
	  cout << "O won!" << endl;
	}
      if (checkTie() == true)
	{
	  cout << "Tie!" << endl;
	}
      clearBoard();
      cout << "Play again? yes or no" << endl;
      cin >> input;
      if (input == "no")
        {
          stillPlaying = false;
        }
      
    }
  return 0;
}
