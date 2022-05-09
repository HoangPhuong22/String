#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ; cin >> t;
    vector<string>v;
    while(t--)
    {
        string x ; cin >>x;
        v.push_back(x);
    }
    sort(v.begin() , v.end() , [](string a , string b)->bool
    {
        string ab = a + b;
        string ba = b + a;
        return ab > ba;
    });
    for(string x : v)
    {
        cout << x;
    }
}
