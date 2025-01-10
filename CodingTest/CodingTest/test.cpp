#include <iostream>
#include <string>
#include <stack>

using namespace std;

char dan[100000];

bool solution(string s)
{
    bool answer = true;
    int lcount = 0;
    stack<string> stc;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            stc.push("(");
        }
        else
        {
            if (stc.empty())
            {
                continue;
            }
            else
            {
                stc.pop();
            }
        }
    }

    if (!stc.empty())
    {
        answer = false;
    }

    return answer;
}

int main()
{
	ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
	cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

    cin >> dan;

    cout << solution(dan);

	return 0;
}