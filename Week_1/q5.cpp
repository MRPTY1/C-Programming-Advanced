#include<iostream>
using namespace std;
int main() {
	int n;
	double arr[100][2];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int id;
		double initial, results;
		cin >> id >> initial >> results;
		arr[i][0] = id;
		arr[i][1] = results / initial;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j][1] > arr[j + 1][1]) {
				double temp;
				temp = arr[j][1];
				arr[j][1] = arr[j + 1][1];
				arr[j + 1][1] = temp;
				temp = arr[j][0];
				arr[j][0] = arr[j + 1][0];
				arr[j + 1][0] = temp;
			}
		}
	}
	int max_difference_index;
	double max_difference = 0;
	for (int i = n-1; i > 0; i--)
	{
		double difference = arr[i][1] - arr[i-1][1];
		if (difference > max_difference) {
			max_difference = difference;
			max_difference_index = i;
		}
	}
	cout << max_difference_index + 1 << endl;
	for (int i = max_difference_index; i < n; i++)
	{
		cout << arr[i][0] << endl;
	}
	cout << n - max_difference_index + 1 << endl;
	for (int i = 0; i < max_difference_index; i++)
	{
		cout << arr[i][0] << endl;
	}
}