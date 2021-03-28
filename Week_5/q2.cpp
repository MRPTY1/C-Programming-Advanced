#include<iostream>
using namespace std;
int main() {
	int row, col;
	int arr[100][100];
	cin >> row >> col;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < col; i++)
	{
		int r = 0;
		int c = i;
		while (c > -1 && r < row)
		{
			cout << arr[r++][c--] << endl;
		}
	}
	for (int i = 1; i < row; i++)
	{
		int r = i;
		int c = col - 1;
		while (c > -1 && r < row)
		{
			cout << arr[r++][c--] << endl;
		}
	}
}