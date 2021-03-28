#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main() {
	stack<int> s;
	string str;
	cin >> str;
	char b = str[0];
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == b) {
			s.push(i);
		}else {
			cout << s.top() <<" "<< i << endl;
			s.pop();
		}
	}
}