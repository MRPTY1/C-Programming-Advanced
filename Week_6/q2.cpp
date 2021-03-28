#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char str1[256];
		cin >> str1;
		for (int j = 0; j < strlen(str1); j++)
		{
			switch (str1[j])
			{
			case 'A':cout << 'T'; break;
			case 'T':cout << 'A'; break;
			case 'C':cout << 'G'; break;
			case 'G':cout << 'C'; break;
			}
		}
		cout << endl;
	}
}