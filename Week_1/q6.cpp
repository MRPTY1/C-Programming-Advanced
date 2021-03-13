#include<iostream>
using namespace std;
int main() {
	int n;
	char arr[100][100];
	int day;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> day;
	for (int k = 0; k < day-1; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				// �ж��Ƿ��Ⱦ
				if (arr[i][j] == '@') {
					// �ж���Χ�����Ƿ�������û�����߽�
					if (i - 1 > -1 && arr[i - 1][j] == '.') {
						// ����Ϊ��Ⱦ��δ����״̬
						arr[i - 1][j] = '?';
					}
					if (i + 1 < n && arr[i + 1][j] == '.') {
						arr[i + 1][j] = '?';
					}
					if (j - 1 > -1 && arr[i][j - 1] == '.') {
						arr[i][j - 1] = '?';
					}
					if (j + 1 < n && arr[i][j + 1] == '.') {
						arr[i][j + 1] = '?';
					}
				}
			}
		}
		// һ������󣬽���Ⱦ��δ����״̬����Ϊ��Ⱦ�ɴ���״̬
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] == '?') {
					arr[i][j] = '@';
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == '@') {
				sum++;
			}
		}
	}
	cout << sum << endl;
}