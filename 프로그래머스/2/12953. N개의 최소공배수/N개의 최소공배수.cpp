#include <string>
#include <vector>

using namespace std;

int CSG(int a, int b)
{
    int result = 1;
    int min = a;
    int max = b;
    if (a > b) {
        min = b;
        max = a;
    }
    if (min == 1) result = max;
    else if (min == max) result = max;
    else {
        result = min * max;
        for (int i = 2; i <= min; i++)
        {
            if (min % i == 0 && max % i == 0)
            {
                result = (max/ i) *min;
            }
        }
    }
    return result;
}

int solution(vector<int> arr) {
    int answer = 0;
    
    if (arr.size() == 1) answer = arr[0];
    else {
        int csg = CSG(arr[0], arr[1]);
        for (int i = 2; i < arr.size(); i++)
        {
            csg = CSG(csg, arr[i]);
        }
        answer = csg;
    }
    return answer;
}