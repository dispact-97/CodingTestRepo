// 프로그래머스 숫자 짝꿍
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
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	string X, Y;

	cin >> X >> Y;

	cout << solution(X, Y);

	return 0;
}