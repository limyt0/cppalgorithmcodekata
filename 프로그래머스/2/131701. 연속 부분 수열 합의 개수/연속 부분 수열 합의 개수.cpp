#include <string>
#include <vector>
#include <set>
#include <numeric>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    elements.insert(elements.end(), elements.begin(), elements.end());


    set<int> s;
    for (int i = 0; i < elements.size() / 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < elements.size() / 2; j++)
        {
            sum = accumulate(elements.begin() + j, elements.begin() + j + i, 0);
            s.insert(sum);
        }
    }
    answer = s.size();
    return answer;
}