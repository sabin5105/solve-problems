#include<iostream>
#include<cstring>
#include<string>
#include<cmath>

using namespace std;
long long int n;
int main()
{
	cin >> n;
	int ans = 0;

	int temp_n = n;
	int count=0;
	do		// n이 몇자리수인지
	{
		temp_n = int(temp_n / 10);
		count++;
	} while (temp_n > 0);
	count--;

	if (count < 1)
		cout << n;
	else
	{
		for (int i = count-1; i > 0; i--)
		{
			ans += 9 * pow(10, i) * (i+1);
		}
		ans += (n - pow(10,count) + 1) * (count+1) + 10;

		cout << ans-1;
	}
}