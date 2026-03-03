#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int first = 0;
        int cnt_f = 0;
        int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[first] == s[i]) cnt_f++;
        else cnt++;
        if (cnt > 0 && cnt == cnt_f)
        {
            first = i + 1;
            cnt = 0;
            cnt_f = 0;
            answer++;
        }
    }
    if (cnt != cnt_f) answer++;
    return answer;
}
