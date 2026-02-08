#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int al[26];
    for (int i = 0; i < 26; i++)
    {
        al[i] = -1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int tmp = s[i] - 'a';
        if (al[tmp] == -1) {
            answer.push_back(-1);
        }
        else {
            answer.push_back(i - al[tmp]);
        }
        al[tmp] = i;

    }
    return answer;
}