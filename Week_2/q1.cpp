#include<iostream>
using namespace std;
void reverse_out(char[],int);
int index = 0;
int main() {
	char str[501];
	cin.getline(str, 500);
	while (true)
	{
		if (str[index] == 0) {
			break;
		}
		else if (str[index] == ' ') {
			cout << str[index];
			index++;
		}
		else {
			reverse_out(str, index);
		}
	}
}

void reverse_out(char str[],int i) {
	if (str[i] != 0&&str[i]!=' ') {
		reverse_out(str, i+1);
		cout << str[i];
	}
	else {
		index = i;
	}
}