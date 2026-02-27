#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> progress;
    for (int i = 0; i < score.size(); i++)
    {
        progress.push_back(score[i]);
        sort(progress.rbegin(), progress.rend());

        if (progress.size() < k)
        {
            int tmp = progress[progress.size() - 1];
            answer.push_back(tmp);
        }
        else {
            answer.push_back(progress[k-1]);
        }
        
    }
    return answer;
}