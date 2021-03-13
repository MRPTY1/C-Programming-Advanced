#include<iostream>
using namespace std;
int main() {
	int f, d, t, h;
	for (f = 1; f < 5; f++)
	{
		for (d = 1; d < 5; d++)
		{
			for (t = 1; t < 5; t++)
			{
				for (h = 1; h < 5; h++)
				{
					if (f + d + t + h == 10 && f * d * t * h == 24) {
						int A = (d == 1) + (h == 4) + (f == 3);
						int B = (h == 1) + (d == 4) + (f == 2) + (t == 3);
						int C = (h == 4) + (d == 3);
						int D = (f == 1) + (t == 4) + (h == 2) + (d == 3);
						if (A==1 && B==1 && C==1 && D==1) {
							cout << f << endl;
							cout << d << endl;
							cout << t << endl;
							cout << h << endl;
						}
					}
				}
			}
		}
	}
}