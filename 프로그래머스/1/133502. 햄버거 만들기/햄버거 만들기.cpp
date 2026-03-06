#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int arr[] = {1,2,3,1};
    vector<int> s;
    for (int a : ingredient)
    {
        s.push_back(a);
        if (s.size() >= 4
            && arr[0] == s[s.size()-4]
            && arr[1] == s[s.size()-3]
            && arr[2] == s[s.size()-2]
            && arr[3] == s[s.size()-1])
        {
            for (int i = 0; i < 4; i++) s.pop_back();
            answer++;
        }

    }
   
    return answer;
}