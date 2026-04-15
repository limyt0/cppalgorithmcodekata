#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    set<pair<int, int>> s;
    for (int i = 0; i < priorities.size(); i++)
    {
        s.insert({ -priorities[i], i } );
    }
    
    int count = 1;
    for (const auto& i : s)
    {

        if (i.second == location)
        {
            answer = count;
            break;
        }
        count++;
    }

    return answer;
}