#include<stdio.h>
int getnum(int a,int b)
{
    int c=a,d=b;
    while(d!=0)
    {
        int mod=c%d;
        c=d;
        d=mod;
    }
    return c;
}

int main()
{
    //常量声明
    const int a=1;
    //常量数组
    const int b[3]={1,2,3};
    //变量声明
    int var1=2,var2;
    var2=3-1;
    float var3=2.2;
    int var4[6/2][1+1]={{1,2},{3,4},{5,6}};
    //隐式类型转换
    float var5=var3+var2;
    //算数表达式、条件表达式、逻辑表达式、赋值表达式
    int res=getnum(var2,var1);
    return 0;
}