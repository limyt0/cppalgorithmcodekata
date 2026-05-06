#include <string>
#include <vector>

using namespace std;
int max_dungeons = 0;

void tracking(int cnt, int k, const vector<vector<int>>& dungeons, vector<bool>& visited) {
    max_dungeons = max(max_dungeons, cnt);

    for (int i = 0; i < dungeons.size(); i++) {
        if (visited[i] || k < dungeons[i][0]) continue;

        visited[i] = true;
        tracking(cnt + 1, k - dungeons[i][1], dungeons, visited);
        visited[i] = false;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    max_dungeons = 0; 
    vector<bool> visited(dungeons.size(), false);
    
    tracking(0, k, dungeons, visited);
    
    return max_dungeons;
}