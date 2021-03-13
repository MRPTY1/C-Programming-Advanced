#include<iostream>
#include<cstring>
using namespace std;

int pop(char str[], int i) {
	if (i > -1) {
		if (str[i] == ')') {
			cout << pop(str, i - 1) << " " << i << endl;
		}
		else {
			pop(str, i - 1);
			return i;
		}
	}
}

int main() {
	char str[200];
	cin.getline(str, 200);
	pop(str, strlen(str) - 1);
}