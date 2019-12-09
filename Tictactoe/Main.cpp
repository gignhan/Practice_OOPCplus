
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
char square[3][3] = {{'1','2','3'},{'4', '5', '6'},{'7', '8', '9'} };
string player1="";
string player2="";
int checkwin();
void board();
char mode;
int main()
{
	cout << "\n\n\t\tWelcome To Tictactoe game! Play with your way\n";
	cout << "\tIf you find any problem,please contact xuannhan2905@gmail.com\n\n";
	cout << "SELECT YOUR MODE (1 - PLAY GAME, OTHERS - EXIT GAME):"; cin >> mode;
	if (mode == '1') {
		cout << "Enter name  player 1: "; cin >> player1;
		cout << "Enter name player 2: "; cin >> player2;
		int player = 1, i, choice;
		char mark;
		system("cls");
		do
		{
			board();
			player = (player % 2) ? 1 : 2;
			cout << "Player " << player << ", enter a number:  ";
			cin >> choice;
			mark = (player == 1) ? 'X' : 'O';
			if (choice == 11 && square[0][0] == '1')
				square[0][0] = mark;
			else if (choice == 12 && square[0][1] == '2')
				square[0][1] = mark;
			else if (choice == 13 && square[0][2] == '3')
				square[0][2] = mark;
			else if (choice == 21 && square[1][0] == '4')
				square[1][0] = mark;
			else if (choice == 22 && square[1][1] == '5')
				square[1][1] = mark;
			else if (choice == 23 && square[1][2] == '6')
				square[1][2] = mark;
			else if (choice == 31 && square[2][0] == '7')
				square[2][0] = mark;
			else if (choice == 32 && square[2][1] == '8')
				square[2][1] = mark;
			else if (choice == 33 && square[2][2] == '9')
				square[2][2] = mark;
			else
			{
				cout << "Invalid move ";
				player--;
				return 0;
				system("pause");
			}
			i = checkwin();
			player++;
		} while (i == -1);
		board();
		if (i == 1)
			if(--player == 1)
				cout << "==>\aPlayer " << player1 << " win "<<endl;
			else
			{
				cout << "==>\aPlayer " << player2 << " win " << endl;
			}
		else
			cout << "==>\aGame draw";

		system("pause");
		return 0;
	}
	else return 0;
}
int checkwin()
{
	if (square[0][0] == square[0][1] && square[0][1] == square[0][2])
		return 1;
	else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])
		return 1;
	else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])
		return 1;
	else if (square[0][0] == square[1][0] && square[2][0] == square[1][0])
		return 1;
	else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])
		return 1;
	else if (square[0][2] == square[1][2] && square[1][2] == square[2][2])
		return 1;
	else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])
		return 1;
	else if (square[0][2] == square[1][1] && square[1][1] == square[2][0])
		return 1;
	else if (square[0][0] != '1' && square[0][1] != '2' && square[0][2] != '3' && square[1][0] != '4' && square[1][1] != '5' && square[1][2] != '6' && square[2][0] != '7' && square[2][1] != '8' && square[2][2] != '9')
		return 0;
	else
		return -1;
}
// Ve khung 
void board()
{
	system("cls");
	cout <<"\t\t\t"<<player1<<" (X)  -"<< player2<<" (O)" << endl << endl;
	cout << endl;
	cout << "\t\t\t" << " _________________" << endl;
	cout << "\t\t\t" << "|     |     |     |" << endl;
	cout << "\t\t\t" << "|  " << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << "  |" << endl;
	cout << "\t\t\t" << "|_____|_____|_____|" << endl;
	cout << "\t\t\t" << "|     |     |     |" << endl;
	cout << "\t\t\t" << "|  " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << "  |" << endl;
	cout << "\t\t\t" << "|_____|_____|_____|" << endl;
	cout << "\t\t\t" << "|     |     |     |" << endl;
	cout << "\t\t\t" << "|  " << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << "  |" << endl;
	cout << "\t\t\t" << "|_____|_____|_____|" << endl << endl;
}

void introduce()
{
	cout << "\t\t Introduction to how to play game Tactictoe" << endl;
	cout << "\t\t\t" << "    1    2   3" << endl;
	cout << "\t\t\t" << "   ___ ___ ___" << endl;
	cout << "\t\t\t" << "1 |___|___|___|" << endl;
	cout << "\t\t\t" << "2 |___|___|___|" << endl;
	cout << "\t\t\t" << "3 |___|___|___|" << endl;
	cout << "\t\t When you want to select the cell to type X, you enter the row before the following column" << endl;
	cout << "\t\t Ex : Your Turn Fly - O: 12" << endl;
	cout << "\t\t\t" << "    1    2   3" << endl;
	cout << "\t\t\t" << "   ___ ___ ___" << endl;
	cout << "\t\t\t" << "1 |___|_O_|___|" << endl;
	cout << "\t\t\t" << "2 |___|___|___|" << endl;
	cout << "\t\t\t" << "3 |___|___|___|" << endl;

}