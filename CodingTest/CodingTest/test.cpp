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
	ios::sync_with_stdio(false); // C�� C++�� ������� ����ȭ���� ���� (����� �ӵ� ���)
	cin.tie(NULL);               // cin�� cout�� ������ �����Ͽ� ����� ���� ����ȭ

    cin >> dan;

    cout << solution(dan);

	return 0;
}