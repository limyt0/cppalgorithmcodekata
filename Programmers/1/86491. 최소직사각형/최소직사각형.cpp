#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w = 0;
    int h = 0;
    for (int i = 0; i < sizes.size(); i++)
    {
        int tempw = 0;
        int temph = 0;
        if (sizes[i][0] < sizes[i][1])
        {
            tempw = sizes[i][1];
            temph = sizes[i][0];
        }
        else
        {
            tempw = sizes[i][0];
            temph = sizes[i][1];
        }

        if (w <= tempw) w = tempw;
        if (h <= temph) h = temph;

    }
    return w*h;
}