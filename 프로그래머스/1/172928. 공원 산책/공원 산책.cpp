#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int nowx = 0;
    int nowy = 0;
    int maxx = park[0].size() - 1;
    int maxy = park.size() - 1;
    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].size(); j++)
        {
            if (park[i][j] == 'S')
            {
                nowy = i;
                nowx = j;
            }
        }
    }
    for (int i = 0; i < routes.size(); i++)
    {
        //if (park[nowy][nowx] == 'X') continue;
        int num = (routes[i][2] - '0');
        int tmpx = 0;
        int tmpy = 0;
        if (routes[i][0] == 'E' ) tmpx = 1;  //nowx += num;
        else if (routes[i][0] == 'W' ) tmpx = -1; //nowx -= num;
        else if (routes[i][0] == 'N' ) tmpy = -1;//nowy -= num;
        else if (routes[i][0] == 'S') tmpy = 1; //nowy += num;
        bool isX = false;
        for (int j = 0; j <= num; j++)
        {
            int x = tmpx * j;
            int y = tmpy * j;
            if (nowx + x <= maxx && nowx + x >= 0 && nowy + y >= 0 && nowy + y <= maxy) {
                if (park[nowy + y][nowx + x] == 'X')
                {
                   isX = true;
                   break;
                }
            }
            else {
                isX = true;
                break;
            }
        }
        if (!isX) {
            nowx += (num*tmpx);
            nowy += (num*tmpy);
        }

    }

    answer.push_back(nowy);
    answer.push_back(nowx);


    return answer;
}