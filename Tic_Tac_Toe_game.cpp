#include <iostream>
using namespace std;
class tictactoe{
char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char space[10] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int player = 1, choice, i;
char mark;
public:
tictactoe();
void board();
int checkwin();
void play();

};
int main(){
  tictactoe obj;
  obj.play();
  return 0;
  
}

int tictactoe:: checkwin() {
  if (square[1] == square[2] && square[2] == square[3])

    return 1;
  else if (square[4] == square[5] && square[5] == square[6])

    return 1;
  else if (square[7] == square[8] && square[8] == square[9])

    return 1;
  else if (square[1] == square[4] && square[4] == square[7])

    return 1;
  else if (square[2] == square[5] && square[5] == square[8])

    return 1;
  else if (square[3] == square[6] && square[6] == square[9])

    return 1;
  else if (square[1] == square[5] && square[5] == square[9])

    return 1;
  else if (square[3] == square[5] && square[5] == square[7])

    return 1;
  else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
           square[4] != '4' && square[5] != '5' && square[6] != '6' &&
           square[7] != '7' && square[8] != '8' && square[9] != '9')

    return 0;
  else
    return -1;
}

void tictactoe:: board() {
  cout << "\n\n\tTic Tac Toe\n\n";

  cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
  cout << endl;

  cout << "     |     |     " << endl;
  cout << "  " << space[1] << "  |  " << space[2] << "  |  " << space[3]
       << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << space[4] << "  |  " << space[5] << "  |  " << space[6]
       << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << space[7] << "  |  " << space[8] << "  |  " << space[9]
       << endl;

  cout << "     |     |     " << endl << endl;
}



   void tictactoe:: play(){
     
  do {
    board();
    
    player = (player % 2) ? 1 : 2;
    
    cout << "Player " << player << ", enter a number:  ";
    cin >> choice;

    mark = (player == 1) ? 'X' : 'O';

 if (choice == 1 && square[1] =='1'){
      
    
space[1]=mark;
      square[1] = mark;
    }
    else if (choice == 2 && square[2] == '2'){
      
    
space[2]=mark;
      square[2] = mark;
    }
    else if (choice == 3 && square[3] == '3'){
      
    
space[3]=mark;
      square[3] = mark;
    }
    else if (choice == 4 && square[4] == '4'){
      
    space[4]=mark;
square[4] = mark;
      }
    else if (choice == 5 && square[5] == '5')
    {
 space[5]=mark;
      square[5] = mark;
    }
    else if (choice == 6 && square[6] == '6'){
      
    
space[6]=mark;
      square[6] = mark;
    }
    else if (choice == 7 && square[7] == '7')
    {
      space[7]=mark;
      square[7] = mark;
    }
    else if (choice == 8 && square[8] == '8')
    {space[8]=mark;
      square[8] = mark;
    }
    else if (choice == 9 && square[9] == '9')
    {
      
space[9]=mark;
      square[9] = mark;
    }
    else {
      cout << "Invalid move ";

      player--;
      cin.ignore();
      cin.get();
    }
    i = checkwin();

    player++;
  } while (i == -1);
  board();
  if (i == 1)

    cout << "==>\aPlayer " << --player << " win ";
  else
    cout << "==>\aGame draw";
    

  cin.ignore();
  cin.get();

}
tictactoe::tictactoe(){
  cout<<"============HOW TO PLAY?=========="<<endl;
  cout<<"-->As you can see each block of the board is allocated a number from 1 to 9."<<endl;
  cout<<"-->Enter the number that is assigned to the block at which you want to take your turn."<<endl;
  cout<<"-->There are no exceptions to the standard tic tac toe rules.";
  cout << "\n\n\tTic Tac Toe\n\n";
  cout << "     |     |     " << endl;
  cout << "  " << square[1]<< "  |  " <<square[2] << "  |  " << square[3]
       << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6]
       << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9]
       << endl;

  cout << "     |     |     " << endl << endl;
  
}