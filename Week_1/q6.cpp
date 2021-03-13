#include<iostream>
using namespace std;
int main() {
	int n;
	char arr[100][100];
	int day;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> day;
	for (int k = 0; k < day-1; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// 判断是否感染
				if (arr[i][j] == '@') {
					// 判断周围房间是否有人且没超过边界
					if (i - 1 > -1 && arr[i - 1][j] == '.') {
						// 设置为感染但未传播状态
						arr[i - 1][j] = '?';
					}
					if (i + 1 < n && arr[i + 1][j] == '.') {
						arr[i + 1][j] = '?';
					}
					if (j - 1 > -1 && arr[i][j - 1] == '.') {
						arr[i][j - 1] = '?';
					}
					if (j + 1 < n && arr[i][j + 1] == '.') {
						arr[i][j + 1] = '?';
					}
				}
			}
		}
		// 一天结束后，将感染但未传播状态更新为感染可传播状态
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] == '?') {
					arr[i][j] = '@';
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == '@') {
				sum++;
			}
		}
	}
	cout << sum << endl;
}