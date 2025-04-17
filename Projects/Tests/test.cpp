#include <bits/stdc++.h>
using namespace std;

const int MX = 600;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, char c)
{
	dat[unused] = c;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];

	if (nxt[addr] != -1)
		pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	unused++;
}

void erase(int addr)
{
	nxt[pre[addr]] = nxt[addr];
	if (nxt[addr] != -1)
		pre[nxt[addr]] = pre[addr];
}

void traverse()
{
	int cur = nxt[0];
	while (cur != -1)
	{
		cout << dat[cur];
		cur = nxt[cur];
	}
	cout << "\n\n";
}

int main(void)
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);

	string s;
	int M;
	cin >> s >> M;
	for (int i = 0; i < s.length(); i++)
	{
		insert(i, s[i]);
	}

	char input;
	int cursor = s.length();
	int N = cursor;
	while (M--)
	{
		cin >> input;
		if (input == 'L' && cursor > 0)
		{
			cout << "[ L ]: 왼쪽으로 이동\n";
			cursor--;
		}
		else if (input == 'D' && cursor < N)
		{
			cout << "[ D ]: 오른쪽으로 이동\n";
			cursor++;
		}
		else if (input == 'B' && cursor != 0)
		{
			cout << "[ B ]: 왼쪽 삭제\n";
			erase(cursor);
			cursor--;
			N--;
		}
		else if (input == 'P')
		{
			cin >> input;
			cout << "[ P ]: 왼쪽에 추가\n";
			insert(cursor, input);
			cursor++;
			N++;
		}

		cout << "cursor: " << cursor << '\n';
		traverse();
	}
}
