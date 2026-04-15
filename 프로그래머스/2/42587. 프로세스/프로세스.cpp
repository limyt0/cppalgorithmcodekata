#include <string>
#include <vector>
#include<queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> pq;
    queue<pair<int, int>> q;
    for (int i = 0; i < priorities.size(); i++) {
        q.push({ i,priorities[i] });
        pq.push(priorities[i]);
    }

    int cnt = 1;
    while (1) {

        pair<int, int> qfront = q.front();
        q.pop();

        if (qfront.second == pq.top()) {

            if (qfront.first == location) {

                answer = cnt;
                break;
            }
            else {
                pq.pop();
                cnt++;

            }


        }
        else if (qfront.second != pq.top()) {
            q.push({ qfront.first,qfront.second });

        }
    }
    return answer;
}