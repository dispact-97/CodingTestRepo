// 백준 7785
// https://www.acmicpc.net/problem/7785

#include <iostream>
#include <map>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0;
	cin >> n;
	map<string, string,greater<string>>M1;
	string key;
	string val;

	for (int i = 0; i < n; ++i)
	{
		cin >> key >> val;
		M1[key] = val;
	}

	map<string, string>::iterator it;
	for (it = M1.begin(); it != M1.end(); ++it)
	{
		if (it->second == "enter")
		{
			cout << it->first << "\n";	// do not use endl-> "\n"이 더 빠르다
		}
	}

	return 0;
}