// ���α׷��ӽ� pccp ���⹮�� 1�� / �ش� ����
// https://school.programmers.co.kr/learn/courses/30/lessons/250137

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<int, int> attackTime;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
	int answer = 0;
	int lastTime = 0;
	int count = 0;

	for (int i = 0; i < attacks.size(); i++)
	{
		attackTime[attacks[i][0]] = attacks[i][1];

		if (i == (attacks.size() - 1))
		{
			lastTime = attacks[i][0];
		}
	}

	answer = health;

	for (int i = 0; i <= lastTime; i++)
	{
		if (attackTime[i] != 0)
		{
			answer -= attackTime[i];
			count = 0;

			if (answer <= 0)
			{
				answer = -1;
				break;
			}
		}
		else
		{
			if (answer <= health && count < bandage[0])
			{
				answer += bandage[1];
				count++;

				if (count >= bandage[0])
				{
					answer += bandage[2];
					count = 0;
				}
			}
		}

		if (answer >= health)
		{
			answer = health;
		}
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

	vector<int> band = { 5,1,5 };
	int health = 30;
	vector<vector<int>> attacks = { {2,10},{9,15},{10,5},{11,5} };

	cout << solution(band, health, attacks);

	return 0;
}