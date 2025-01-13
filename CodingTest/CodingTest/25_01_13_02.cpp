// 프로그래머스 숫자 짝꿍
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
    ios::sync_with_stdio(false); // C와 C++의 입출력을 동기화하지 않음 (입출력 속도 향상)
    cin.tie(NULL);               // cin과 cout의 묶음을 해제하여 입출력 성능 최적화

    string X, Y;

    cin >> X >> Y;

    cout << solution(X, Y);

    return 0;
}