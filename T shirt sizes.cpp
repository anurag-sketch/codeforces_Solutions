#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ans(string a, string b)
{

    int si = a.size();
    int pi = b.size();
    int count = 0;
    int pount = 0;
    if (a[si - 1] == b[pi - 1])
    {

        if (a[si - 1] == 'S')
        {
            for (int i = (si - 2); i >= 0; i--)
            {
                count++;
            }
            for (int i = (pi - 2); i >= 0; i--)
            {
                pount++;
            }
            if (count == pount)
            {
                cout << "="<<endl;
            }
            if (count > pount)
            {
                cout << "<"<<endl;
            }
            if (count < pount)
            {
                cout << ">"<<endl;
            }
        }

        if (a[si - 1] == 'L')
        {
            for (int i = (si - 2); i >= 0; i--)
            {
                count++;
            }
            for (int i = (pi - 2); i >= 0; i--)
            {
                pount++;
            }
            if (count == pount)
            {
                cout << "="<<endl;
            }
            if (count > pount)
            {
                cout << ">"<<endl;
            }
            if (count < pount)
            {
                cout << "<"<<endl;
            }
        }
        
        if(a[si-1]=='M')
        {
            cout<<"="<<endl;
        }
    }

if (a[si - 1] == 'S' && b[pi - 1] == 'M')
{
    cout << "<"<<endl;
}
if (a[si - 1] == 'M' && b[pi - 1] == 'S')
{
    cout << ">"<<endl;
}
if (a[si - 1] == 'L' && (b[pi - 1] == 'M' || b[pi - 1] == 'S'))
{
    cout << ">"<<endl;
}
if (b[pi - 1] == 'L' && (a[si - 1] == 'M' || a[si - 1] == 'S'))
{
    cout << "<"<<endl;
}
}

int main()
{

    int a;
    cin >> a;
    int i = 0;
    while (i < a)
    {
        string x, y;
        cin >> x >> y;
        ans(x, y);
        i++;
    }
    return 0;
}