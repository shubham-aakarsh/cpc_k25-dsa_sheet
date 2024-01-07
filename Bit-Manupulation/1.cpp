
#include <bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n)
{

    // Your code here
    if (n <= 0)
        return false;
    if ((n & (n - 1)) == 0)
        return true;
    else
        return false;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;

        if (isPowerofTwo(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
