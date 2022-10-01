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

    //创建未使用的变量和指针
    int* q=nullptr;
    int temp1=0;
    int temp2;

    //创建没用,不规范的循环
    for(int j=0;j*j<100;j++)
    {
        continue;
    }
}