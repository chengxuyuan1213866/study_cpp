//
// Created by Administrator on 2023/8/10.
//
#include <iostream>
using namespace std;

// 内联函数 使用关键字inline定义
// 对于规模较小，调用频繁的函数 ，可以将其声明为内联函数，提高程序执行效率
// 内联函数是在编译时将被调函数嵌入每一个函数调用处，节省了参数传递、控制转移等开销
// 内联函数的语法为
// inline 类型说明符 函数名(参数及类型表)
// 在定义内联函数时，通常时省去函数的声明，而是在声明位置直接给出函数的定义

/*inline int add(int a, int b)        // 内联函数
{
    return a + b;
}
int main()
{
    int a,b,c;
    a = 10;
    b = 20;
    c = add(a,b);
    cout << "a" << "+" << "b" << "=" << c << endl;
    return 0;
}*/

// 函数重载
/*
int max(int x,int y);
double max(double x, double y);
int main()
{
    int a = 2;
    int b = 3;
    double c = 6.0;
    double e = 4.0;
    int x = max(a,b);
    double y = max(c,e);
    cout << a << "和" << b << "的最大值是" << x << endl;
    cout << c << "和" << e << "的最大值是" << y << endl;

    return 0;
}
int max(int x, int y)
{
    if (x >= y)
        return x;
    else
        return y;
}
double max(double x,double y)
{
    if (x >= y)
        return x;
    else
        return y;
}
*/

// 函数默认值
int main()
{
    return 0;
}
































