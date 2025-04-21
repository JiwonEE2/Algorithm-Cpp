#include <iostream>
using namespace std;
int n, x, c, d;
bool b[100000];
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[a[i]] = true;
	}
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (b[x - a[i]] && x - a[i] != a[i])
			c++;
	}
	cout << c / 2;
}