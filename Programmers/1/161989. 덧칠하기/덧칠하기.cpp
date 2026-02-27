#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int check = section[0]-1;
    for (int i = 0; i < section.size(); i++)
    {
        if (check  <= section[i]) 
        {
            check = (section[i]) + m;
            answer++;
        }
    }
    

    return answer;
}