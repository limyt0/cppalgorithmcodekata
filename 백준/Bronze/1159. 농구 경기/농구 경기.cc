#include <vector>
#include <iostream>
#include <map>

using namespace std;
int main() {

    int N;
    cin >> N;
    map<char, int> a;
    vector<string> s(N);
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];

        a[s[i][0]]++;
    }
    
    int count = 0;

    for (const auto& pair : a) {
        if (pair.second >= 5)
        {
            count++;
            cout << pair.first;
        }
    }
    if (count == 0)
    {
        cout << "PREDAJA";
    }

    return 0;
}



