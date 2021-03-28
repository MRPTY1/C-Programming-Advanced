#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int arr[22][22] = { 0 };
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i + 1][j + 1];
		}
	}
	for (int i = 1; i < m + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if (arr[i][j] >= arr[i - 1][j] &&
				arr[i][j] >= arr[i + 1][j] &&
				arr[i][j] >= arr[i][j - 1] &&
				arr[i][j] >= arr[i][j + 1])
			{
				cout << i - 1 << " " << j - 1 << endl;
			}
		}
	}
}