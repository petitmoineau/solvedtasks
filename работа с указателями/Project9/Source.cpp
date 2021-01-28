#include <iostream>
#include <ctime>
using namespace std;

void fillArr(int**& xpointerOArr, int xcolumn, int xline)
{
	for (int stepByLine = 0; stepByLine < xline ; stepByLine++)
	{
		for (int stepByColumn = 0; stepByColumn < xcolumn; stepByColumn++)
		{
			xpointerOArr[stepByLine][stepByColumn] = rand() % 50 + 10;
		}
	}
}

void showArr(int**& xpointerOArr, int xcolumn, int xline)
{
	for (int stepByLine = 0; stepByLine < xline; stepByLine++)
	{
		for (int stepByColumn = 0; stepByColumn < xcolumn; stepByColumn++)
		{
			cout << xpointerOArr[stepByLine][stepByColumn] << "\n";
		}
	}
}

int main()
{
	srand(time(NULL));
	int line;
	int column;
	cout << "Enter line lenghth: ";
	cin >> line;
	cout << "\n\nEnter column lenghth: ";
	cin >> column;
	int** pointerOnArr = new int* [line];
	for (int i = 0; i < line; i++)
	{
		pointerOnArr[i] = new int[column];
	}
	fillArr(pointerOnArr, column, line);
	showArr(pointerOnArr, column, line);
	for (int i = 0; i < line; i++)
	{
		delete[] pointerOnArr[i];
	}
	delete[] pointerOnArr;
	return 0;
}