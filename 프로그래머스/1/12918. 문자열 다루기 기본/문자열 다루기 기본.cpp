#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int len = s.length();
    bool answer = false;
    if (len == 4 || len == 6)
    {
        answer = true;
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            answer = false;
        }
    }
    return answer;
}