#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            count = 0;
            answer += ' ';
        }
        else {
            char a = s[i];
            if (count % 2 == 0 && 'a' <= s[i] && 'z' >= s[i])
            {
               a = s[i]-32;
            }
            if (count % 2 != 0 && 'A' <= s[i] && 'Z' >= s[i])
            {
                a = s[i] + 32;
            }
            answer += a;
            count++;
        }
    }
    return answer;
}