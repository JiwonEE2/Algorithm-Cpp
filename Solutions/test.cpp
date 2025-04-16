#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	int T, A, B;
	vector<int> sum;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		sum.push_back(A + B);
	}

	for (int i = 0; i < T; i++)
	{
		cout << sum[i] << '\n';
	}
}