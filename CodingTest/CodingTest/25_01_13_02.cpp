// ���α׷��ӽ� ���� ¦��
// https://school.programmers.co.kr/learn/courses/30/lessons/131128

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int arr1[10] = { 0, };
    int arr2[10] = { 0, };

    for (auto iter : X)
    {
        arr1[iter]++;
    }

    for (auto iter : Y)
    {

    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << '\n';
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