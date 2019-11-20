
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
char square[3][3] = {{'1','2','3'},{'4', '5', '6'},{'7', '8', '9'} };
string player1="";
string player2="";

void board();
char mode;
int main() 
{
	board();
	system("pause");
	return 0;
	
}
void board()
{
	system("cls");
	cout <<player1<<" (X)  -"<< player2<<" (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[0][0] << "  |  " << square[0][1] << "  |  " << square[0][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1][0] << "  |  " << square[1][1] << "  |  " << square[1][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[2][0] << "  |  " << square[2][1] << "  |  " << square[2][2] << endl;
	cout << "     |     |     " << endl << endl;
}

