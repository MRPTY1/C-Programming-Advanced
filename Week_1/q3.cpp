#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	double one, two, three;
	double a, b, c;
	a = b = c = one = two = three = 0;
	for (int i = 0; i < 3; i++)
	{
		double sum = 0;
		int n, id;
		cin >> id >> n;
		for (int j = 0; j < n; j++)
		{
			char type;
			double money;
			cin >> type >> money;
			if (type == 'A') {
				a += money;
				sum += money;
			}
			else if (type == 'B') {
				b += money;
				sum += money;
			}
			else if (type == 'C') {
				c += money;
				sum += money;
			}
		}
		if (id == 1)one = sum;
		if (id == 2)two = sum;
		if (id == 3)three = sum;
	}
	printf_s("1 %.2f\n", one);
	printf_s("2 %.2f\n", two);
	printf_s("3 %.2f\n", three);
	printf_s("A %.2f\n", a);
	printf_s("B %.2f\n", b);
	printf_s("C %.2f\n", c);
}