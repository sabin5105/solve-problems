#include<iostream>
using namespace std;

long long int dp[102];
int n,t;
void permutation()
{
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= 100; i++)
		dp[i] = dp[i - 3] + dp[i - 2];
}
int main()
{
	cin >> t;
	permutation();
	while (t--)
	{
		cin >> n;
		cout << dp[n] << '\n';
	}
}