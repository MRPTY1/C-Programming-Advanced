#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int arr[100][100];
		int m, n;
		cin >> m >> n;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i == 0 || j == 0) || (i == m - 1 || j == n - 1)) {
					sum += arr[i][j];
				}
			}
		}
		cout << sum << endl;
	}
}