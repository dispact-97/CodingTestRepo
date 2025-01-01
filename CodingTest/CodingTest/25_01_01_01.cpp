// น้มุ 25501
// https://www.acmicpc.net/problem/25501

#include <iostream>
#include <cstring>

using namespace std;

int cnt = 0;

int recursion(const char* s, int l, int r)
{
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int palindrome(const char* s)
{
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		string str;
		cin >> str;

		cout << palindrome(str.c_str()) << " " << cnt << '\n';

	}

	return 0;
}
