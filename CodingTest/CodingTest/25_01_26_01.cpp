// 프로그래머스 무인도 여행
// https://school.programmers.co.kr/learn/courses/30/lessons/154540

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char arr[101][101];

void check()
{

}

vector<int> solution(vector<string> maps) {
    vector<int> answer;

    for (int i = 0; i < maps.size(); i++)
    {
        string str = maps[i];
        for (int j = 0; j < str.size(); j++)
        {

            if (str[j] >= '0' && str[j] <= '9')
            {
                char temp = str[j - 1];
                cout << str[j] << '\n';
            }
        }
    }
    return answer;
}

int main()
{
    vector<string> vec = { "X591X","X1X5X","X231X", "1XXX1" };

    solution(vec);

    return 0;
}