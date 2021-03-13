#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool is_ = 0;
	int number;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp == i && !is_) {
			number = temp;
			is_ = 1;
		}
	}
	if (is_)cout << number << endl;
	else cout << "N" << endl;
}