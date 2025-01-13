#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int box = 0;
    int count = 0;

    vector<int> tempVec;
    box = score.size() / m;

    sort(score.begin(), score.end(),greater<int>());
    //reverse(score.begin(), score.end());

    for (int i = 0; i < box; i++)
    {
        tempVec.clear();
        for (int j = 0; j < m; j++)
        {
            tempVec.push_back(score[count]);
            count++;
        }
        answer += tempVec.back() * k;
    }

    return answer;
}

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

	vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(1);

	cout << solution(3, 4, vec);

	return 0;
}