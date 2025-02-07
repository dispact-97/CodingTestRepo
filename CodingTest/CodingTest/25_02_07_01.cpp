// 프로그래머스 둘만의 암호
// https://school.programmers.co.kr/learn/courses/30/lessons/155652

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = s;
    vector<char> x(skip.begin(), skip.end());

    for (int i = 0; i < answer.size(); i++)
    {
        int count = 0;

        while (count < index)
        {
            answer[i]++;

            if (answer[i] > 'z')
            {
                answer[i] = 'a';
            }

            bool isSkip = false;
            for (char c : x)
            {
                if (answer[i] == c)
                {
                    isSkip = true;
                    break;
                }
            }

            if (!isSkip)
            {
                count++;
            }
        }
    }

    return answer;
}


int main()
{
	string s = "aukks";
	string skip = "wbqd";
	int index = 5;

	cout << solution(s, skip, index);

	return 0;
}