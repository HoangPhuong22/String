#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; cin >>s;
    s += "a";
    vector<string>v;
    string tmp = "";
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(isdigit(s[i]))
        {
            tmp += s[i];
        }
        else
        {
            while(tmp.length() > 1 && tmp[0] == '0')
            {
                tmp.erase(0 , 1);
            }
            if(tmp != "") v.push_back(tmp);
            tmp = "";
        }
    }
    sort(v.begin() , v.end() , [](string a , string b) ->bool
    {
        return a + b > b + a;
    });
    for(string x : v) cout << x;
}
