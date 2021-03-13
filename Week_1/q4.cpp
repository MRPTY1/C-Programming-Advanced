#include<iostream>
using namespace std;
bool is_leap_year(int);
int month_day(int, int);
int main() {
	int y, m, d;
	char t;
	cin >> y >> t >> m >> t >> d;
	if (d < month_day(y, m)) {
		d++;
	}
	else if (m < 12) {
		d = 1;
		m++;
	}
	else {
		y++;
		d = 1;
		m = 1;
	}
	cout << y;
	cout << "-";
	if (m < 10) {
		cout << "0" << m;
	}
	else {
		cout << m;
	}
	cout << "-";
	if (d < 10) {
		cout << "0" << d;
	}
	else {
		cout << d;
	}
	cout << endl;
}
bool is_leap_year(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
int month_day(int year, int month) {
	int normal_year[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leap_year[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (is_leap_year(year)) {
		return leap_year[month - 1];
	}
	else {
		return normal_year[month - 1];
	}
}