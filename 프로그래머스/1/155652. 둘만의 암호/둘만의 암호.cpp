#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = ""; 
    vector<int> as;

    for (int i = 0; i<26; i++)
    {
        as.push_back(0);
    }
    
    for (auto sk : skip)
    {
        int tmp = sk - 'a';
        as[tmp] = 1;
    }

    for (auto c : s)
    {
        int cnt = 0;
        int tmp = c - 'a';
        while (cnt < index)
        {
            tmp += 1;
            if (as[(tmp)%26]!=1)
            {
                cnt++;
            }
        }
        answer.push_back((tmp % 26) + 'a');

    }
    return answer;
}