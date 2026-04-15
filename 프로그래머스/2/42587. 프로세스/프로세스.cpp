#include <string>
#include <vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 1;
    queue<pair<int,int>> q;
    priority_queue<int> pq;
    for (int i = 0; i<priorities.size(); i++)
    {
        q.push({ i, priorities[i] });
        pq.push(priorities[i]);
    }
    
    while (1)
    {
        pair<int, int> qfront = q.front();
        q.pop();
        if (pq.top() == qfront.second)
        {
            if(qfront.first == location)
            { 
                break;
            }
            else {
                answer++;
                pq.pop();
            }
        }
        else {
            q.push(qfront);
        }
    }
    
    return answer;
}