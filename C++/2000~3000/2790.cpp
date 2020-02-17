#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n;
vector<int> player;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		player.push_back(temp);
	}
	sort(player.begin(), player.end());
	int cnt = 0;
	for (int i = 0; i < player.size(); i++)
	{
		if ((player[n - 1] - player[i]) < n)
		{
			int flag = true;
			int score = player[i] + n;
			int rank =  n-cnt-1;
			for (int j = i+1; j < player.size(); j++)
			{
				int cmp = player[j] + rank;
				if (score < cmp)
				{
					flag = false;
					break;
				}
				rank--;
			}
			if (flag == true)
				break;
		}
		cnt++;
	}
	cout << n - cnt;
}