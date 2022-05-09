#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; cin >> s;
    map<char,int>mp;
    for(int i = 0 ; i < s.length() ; i++)
    {
        mp[s[i]]++;
    }
    vector<pair<char,int>>v;
    for(auto x : mp)
    {
        v.push_back({x.first , x.second});
    }
    sort(v.begin() , v.end() , [](pair<char,int> a , pair<char,int>b)->bool
    {
        if(a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << endl;
    int res = v[0].second;
    char kq = v[0].first;
    for(int i = 1 ; i < v.size() ; i++)
    {
        if(v[i].second == res)
        {
            kq = v[i].first;
        }
    }
    cout << kq << " " << res;
}
