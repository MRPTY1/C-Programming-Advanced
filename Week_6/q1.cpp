#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main() {
	int m;
	double a;
	cin >> m >> a;
	string l_id[50];
	double l_value[50];
	string h_id[50];
	double h_value[50] = { 0 };
	int h_len = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> l_id[i];
		cin >> l_value[i];
		if (l_value[i] >= a) {
			h_id[h_len] = l_id[i];
			h_value[h_len] = l_value[i];
			h_len++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m - i - 1; j++)
		{
			if (h_value[j] < h_value[j + 1]) {
				double temp;
				temp = h_value[j];
				h_value[j] = h_value[j + 1];
				h_value[j + 1] = temp;
				string s_temp;
				s_temp = h_id[j];
				h_id[j] = h_id[j + 1];
				h_id[j + 1] = s_temp;
			}
		}
	}
	if (h_len) {
		for (int i = 0; i < h_len; i++)
		{
			cout << h_id[i] << " ";
			printf("%.1f\n", h_value[i]);
		}
	}
	else {
		cout << "None." << endl;
	}
}