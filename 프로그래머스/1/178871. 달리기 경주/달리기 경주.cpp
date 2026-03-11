#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> m1;
    map<string, int> m2;
    for (int i = 0; i < players.size(); i++)
    {
        m1.insert(pair<int, string>(i, players[i]));
        m2.insert(pair<string, int>(players[i], i));
    }
    for (int i = 0; i < callings.size(); i++)
    {
        int curindex = m2[callings[i]];
        string changestr = m1[curindex -1];

        m2[callings[i]] -= 1;
        m2[changestr] += 1;
        m1[curindex] = changestr;
        m1[curindex - 1] = callings[i];
    }

    for (int i = 0; i < players.size(); i++)
    {
        answer.push_back(m1[i]);
    }

    return answer;
}