#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int a[1001], b[1001];
int ans[1001];

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	int MAX = 0;
	int ANS = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i] >= a[j])
			{
				ans[j]++;
				if (MAX < ans[j])
				{
					ANS = j;
					MAX = ans[j];
				}
				break;
			}
		}
	}
	cout << ANS+1;
}