#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; getline(cin , s);
    map<string,int>mp;
    string x;
    stringstream ss(s);
    vector<string>v;
    while(ss >> x)
    {
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    for(string x : v) cout << x << " ";
    cout <<endl;
    sort(v.begin() , v.end() , [] (string a , string b)->bool
    {
        if(a.size() != b.size())
        {
            return a.size() < b.size();
        }
        return a < b;
    });
    for(string x : v)
    {
        cout << x << " ";
    }
}
