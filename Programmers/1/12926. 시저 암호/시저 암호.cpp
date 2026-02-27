#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ') answer += ' ';
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            int temp = s[i] + n;
            if (temp > 'z') temp -= 26;
            answer += temp;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int temp = s[i] + n;
            if (temp > 'Z') temp -= 26;
            answer += temp;
        }
    }
    return answer;
}