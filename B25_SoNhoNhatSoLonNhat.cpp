#include <bits/stdc++.h>
using namespace std;

void Max(int m , int s)
{

        string res = "";
        while(m--)
        {
            if(s >= 9)
            {
                res += to_string(9);
                s -= 9;
            }
            else
            {
                res += to_string(s);
                s = 0;
            }
        }
        cout << res;

}
void Min(int m , int s)
{
        string res = "";
        m--;
        s--;
        while(m--)
        {
            if(s >= 9)
            {
                res += to_string(9);
                s -= 9;
            }
            else
            {
                res = to_string(s) + res;
                s = 0;
            }
        }
        ++s;
        res = to_string(s) + res;
        cout << res;
}
int main()
{
    int m , s ; cin >> m >> s;
    if(m * 9 < s || s == 0)
    {
        cout << "NOT FOUND";
    }
    else
    {
         Min(m , s);
        cout << endl;
        Max(m , s);
    }
}
