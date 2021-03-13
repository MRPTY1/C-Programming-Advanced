#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main() {
	stack<int> s;
	char str[200];
	cin.getline(str, 200);
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '(') {
			s.push(i);
		}else {
			cout << s.top() <<" "<< i << endl;
			s.pop();
		}
	}
}