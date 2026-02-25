#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> check = { "aya", "ye", "woo", "ma" };
    for (string str : babbling)
    {
        bool ischeck = true;
        string tmp = "";
        while (str.size() > 0)
        {
            int size = str.size();
           
            for (string c : check)
            {
                if (c == tmp) {
                    continue;
                }
                if (str.substr(0, c.size()) == c)
                {
                    tmp = c;
                    str.replace(0, c.size(), "");
                }
            }
            if (size == str.size())
            {
                ischeck = false;
                break;
            }
        }
        if (ischeck) answer++;
    }
    return answer;
}