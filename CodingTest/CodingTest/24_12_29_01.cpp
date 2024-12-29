// ���� 25192
// https://www.acmicpc.net/problem/25192

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	int N = 0, count = 0;
	set<string> st;
	cin >> N;

	while (N--)
	{
		string temp;
		cin >> temp;

		if (temp == "ENTER")
		{
			count += st.size();
			st.clear();
		}
		else
		{
			st.insert(temp);
		}
	}

	count += st.size();

	cout << count;

	return 0;
}