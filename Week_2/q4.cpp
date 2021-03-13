#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main() {
	stack<int> s;
	char str[200];
	cin.getline(str, 200);
	char new_str[200] = {0};
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '(') {
			s.push(i);
		}
		else if (str[i] == ')') {
			if (!s.size()) {
				new_str[i] = '?';
			}
			else {
				new_str[i] = ' ';
				new_str[s.top()] = ' ';
				s.pop();
			}
		}
		else {
			new_str[i] = ' ';
		}
	}
	while (s.size())
	{
		new_str[s.top()] = '$';
		s.pop();
	}
	cout << new_str << endl;
}