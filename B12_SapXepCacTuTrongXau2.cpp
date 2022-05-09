#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    string t = s;
    reverse(t.begin() , t.end());
    return t == s;
}
int main()
{
    string s ; getline(cin , s);
    map<string,int>mp;
    string x;
    set<string>se;
    stringstream ss(s);
    vector<string>v;
    while(ss >> x)
    {
        if(!se.count(x) && check(x))
        {
            v.push_back(x);
            se.insert(x);
        }
    }
    stable_sort(v.begin() , v.end() , [] (string a , string b) ->bool
    {
        return a.size() < b.size();    
    });
    for(string x : v)
    {
        cout << x << " ";
    }
}
