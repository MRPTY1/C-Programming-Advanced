#include<iostream>
using namespace std;
void collatz(int);
int main() {
	int n;
	cin >> n;
	collatz(n);
}
void collatz(int n) {
	if (n == 1) {
		cout << "End" << endl;
		return;
	}
	if (n % 2 == 0) {
		cout << n << "/2=" << n / 2 << endl;
		collatz(n / 2);
	}
	else {
		cout << n << "*3+1=" << n * 3 + 1 << endl;
		collatz(n * 3 + 1);
	}
}