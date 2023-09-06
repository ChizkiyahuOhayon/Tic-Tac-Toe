#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
// show the current matrix
char Player = 'X';
void Draw()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
// draw a character
void Input()
{
	char a;
	cout << "input the number where you want to draw a character";
	cin >> a;
// I can use a dict if it is python
	switch (a)
	{
	case '1':
		if (matrix[0][0] != '1')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[0][0] = Player;
		break;
	case '2':
		if (matrix[0][1] != '2')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[0][1] = Player;
		break;
	case '3':
		if (matrix[0][2] != '3')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[0][2] = Player;
		break;
	case '4':
		if (matrix[1][0] != '4')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[1][0] = Player;
		break;
	case '5':
		if (matrix[1][1] != '5')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[1][1] = Player;
		break;
	case '6':
		if (matrix[1][2] != '6')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[1][2] = Player;
		break;
	case '7':
		if (matrix[2][0] != '7')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[2][0] = Player;
		break;
	case '8':
		if (matrix[2][1] != '8')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[2][1] = Player;
		break;
	case '9':
		if (matrix[2][2] != '9')
		{
			cout << "This field is occupied, please input again: ";
			Input();
		}
		matrix[2][2] = Player;
		break;
	default:
		cout << "wrong input" << endl;
	}
}

void TogglePlayer()
{
	if (Player == 'X')
		Player = 'O';
	else
		Player = 'X';
}

// decide if someone wins
char Win()
{
	// 'X' wins
	// same in a row
	if (matrix[0][0] == 'X' and matrix[0][1] == 'X' and matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' and matrix[1][1] == 'X' and matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' and matrix[2][1] == 'X' and matrix[2][2] == 'X')
		return 'X';
	// same in a column
	if (matrix[0][0] == 'X' and matrix[1][0] == 'X' and matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' and matrix[1][1] == 'X' and matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' and matrix[1][2] == 'X' and matrix[2][2] == 'X')
		return 'X';
	// same in diagonal
	if (matrix[0][0] == 'X' and matrix[1][1] == 'X' and matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' and matrix[1][1] == 'X' and matrix[2][0] == 'X')
		return 'X';

	//'O' wins
	if (matrix[0][0] == 'O' and matrix[0][1] == 'O' and matrix[0][2] == 'O')
		return'O';
	if (matrix[1][0] == 'O' and matrix[1][1] == 'O' and matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' and matrix[2][1] == 'O' and matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' and matrix[1][0] == 'O' and matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' and matrix[1][1] == 'O' and matrix[2][1] == 'O')
		return'O';
	if (matrix[0][2] == 'O' and matrix[1][2] == 'O' and matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' and matrix[1][1] == 'O' and matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' and matrix[1][1] == 'O' and matrix[2][0] == 'O')
		return 'O';

	// nobody wins
	return ' ';
}

int main()
{
	int n = 0;
	while (1)
	{
		n++;
		Draw();
		Input();
		TogglePlayer();
		if (Win() == 'X')
		{
			cout << "Congratulation! X wins" << endl;
			break;
		}
		if (Win() == 'O')
		{
			cout << "Congratulation! O wins" << endl;
			break;
		}
		if (n == 9)
		{
			cout << "It's a draw " << endl;
			break;
		}
	}
	return 0;
}