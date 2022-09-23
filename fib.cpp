#include<iostream>
using namespace std;
#define Intreger int

Intreger main()
{
    Intreger a, b, i, t, n;  //宏替换及注释删除

    a = 0;
    b = 1;
    i = 1;
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    while (i < n)
    {
    t = b;
    b = a + b;
    cout << b << endl;
    a = t;
    i = i + 1;
    }

}