#include<iostream>
#include<string>
using namespace std;

int main() {
	char sentence[501];
	cin.getline(sentence, 500);
	char word[501];
	int tail = -1;

	for (int i = 0; sentence[i] != '\0'; ++i) {
		if (sentence[i] == ' ') {
			for (int j = tail; j >= 0; --j) {
				cout << word[j];
			}
			cout << sentence[i];
			tail = -1;
		}
		else {
			++tail;
			word[tail] = sentence[i];
		}
	}
	for (int j = tail; j >= 0; --j) {
		cout << word[j];
	}
	return 0;
}
