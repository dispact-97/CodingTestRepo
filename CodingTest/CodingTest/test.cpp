// ���α׷��ӽ� ���� ¦��
// https://school.programmers.co.kr/learn/courses/30/lessons/131128

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
	string answer = "";
	int arr1[10];
	fill(arr1, arr1 + 10, -1);
	int arr2[10] = {};
	vector<int> vec;

	for (int i = 0; i < X.size(); i++)
	{
		int temp = X[i] - '0';
		if (arr1[temp] == -1)
		{
			arr1[temp] = 1;
		}
		else
		{
			arr1[temp]++;
		}
	}

	for (int i = 0; i < Y.size(); i++)
	{
		int temp = Y[i] - '0';
		if (arr1[temp] != -1)
		{
			arr2[temp]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{

	}

	return answer;
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