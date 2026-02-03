#include <string>
#include <vector>

using namespace std;

bool isCheck(string t1, string p) {
    bool result = true;
    for (int i = 0; i < t1.size(); i++)
    {
        if (t1[i] < p[i]) {
            result = true;
            break;
        }
        else if (t1[i] > p[i])
        {
            result = false;
            break;
        }
    }
    return result;
}

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    for (int i = 0; i < t.size() - len+1; i++)
    {
        string s = t.substr(i, len);
        if(isCheck(s, p))
        {
            answer++;
        }
    }
    
    return answer;
}
