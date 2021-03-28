#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n;
	cin >> n;
	char str[1000][40];
	int str_len[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
		str_len[i] = strlen(str[i]);
	}
	int k = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += str_len[i] + 1;
		if (sum > 81) {
			i--;
			for (int j = k; j < i + 1; j++)
			{
				if (j < i) {
					cout << str[j] << " ";
				}
				else {
					cout << str[j] << endl;
				}
			}
			k = i + 1;
			sum = 0;
		}
	}
	for (int i = k; i < n; i++)
	{
		if (i < n) {
			cout << str[i] << " ";
		}
		else {
			cout << str[i] << endl;
		}
	}
}