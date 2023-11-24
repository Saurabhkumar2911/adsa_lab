#include <bits/stdc++.h>
using namespace std;

void search(string s, string p)
{
    int n = s.size();
    int m = p.size();

    for (int i = 0; i < n - m + 1; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (s[i + j] != p[j])
                break;
        }
        if (j == m)
            cout << "pattern found at index : " << i << endl;
    }
}

int main()
{
    string s, p;
    cout << "Enter String : ";
    cin >> s;
    cout << "Enter Pattern : ";
    cin >> p;
    search(s, p);
    return 0;
}