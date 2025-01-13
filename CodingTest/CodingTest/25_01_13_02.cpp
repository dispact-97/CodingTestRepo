// ���α׷��ӽ� ���� ¦��
// https://school.programmers.co.kr/learn/courses/30/lessons/131128

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int* countNum(int arr[], string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		arr[s[i] - '0']++;
	}
	return arr;
}

string solution(string X, string Y) {
	string answer = "";
	int x[10] = {};
	int y[10] = {};

	countNum(x, X);
	countNum(y, Y);

	for (int i = 9; i >= 0; i--)
	{
		int num = min(x[i], y[i]);
		for (int j = 0; j < num; j++)
		{
			answer += to_string(i);
		}
	}

	if (answer == "")
	{
		return "-1";
	}
	else if (answer[0] == '0')
	{
		return "0";
	}
	else return answer;
}

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	string X, Y;

	cin >> X >> Y;

	cout << solution(X, Y);

	return 0;
}