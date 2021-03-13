#include<iostream>
using namespace std;
void reverse_out(char[],int);
int main() {
	char str[500];
	cin.getline(str, 500);
	reverse_out(str,0);
}

void reverse_out(char str[],int i) {
	if (str[i] != 0) {
		reverse_out(str, i+1);
		cout << str[i];
	}
}