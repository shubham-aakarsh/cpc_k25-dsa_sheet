
#include <bits/stdc++.h>
using namespace std;

int maxLength(string S)
{
    vector<char> lis;
    for (int i = 0; i < S.length(); i++)
    {
        int x = lower_bound(lis.begin(), lis.end(), S[i]) - lis.begin();
        if (x == lis.size())
            lis.push_back(S[i]);
        else
            lis[x] = S[i];
    }
    return lis.size();
}


int main()
{

    string S;
    cin >> S;

    cout << maxLength(S) << endl;

    return 0;
}