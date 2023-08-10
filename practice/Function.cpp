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
/*double pow(int n=2,int x=1);
int main()
{
    int a = 2;
    int b = 4;
    cout << pow(a,b) << endl;
    cout << pow(b) << endl;
    cout << pow() << endl;

    return 0;
}
double pow(int n,int x)
{
    int sum = 1;
    for (int i = 0; i < x; i++) {
        sum *= n;
    }
    return sum;
}*/

/*int add(int x,int y);
double add(int x,double y);
int main()
{
    int a = 10;
    int b = 20;
    double c = 30;
    int x = add(a,b);
    double y = add(a,c);
    cout << x << endl;
    cout << y << endl;
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
double add(int x,double y)
{
    return x+y;
}*/

// 函数指针

/*int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int Division(int x,int y);
int main()
{
    int n ;
    int (*p[4])(int x,int y);
    p[0] = add;
    p[1] = sub;
    p[2] = mul;
    p[3] = Division;
    for (int i = 0; i < 4; i++) {
        cout << p[i](10,5) << endl;  // 使用函数指针调用函数
    }
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}int Division(int x,int y)
{
    if(y == 0)
        return 0;
    else
        return x+y;
}*/


// 1.内部变量(局部变量)
// 2.外部变量(全局变量)
//变量的 存储类别
// 1.静态变量
int Factorial(int n);
int main()
{
    int a = 4;
    for (int i = 1; i <= a; ++i) {
        cout << i << "! = " << Factorial(i) <<endl;
    }
    /* 次数  static int f的值
     * 1        1*1
     * 2        1*2
     * 3        2*3
     * 4        2*3*4
     * */
    return 0;
}
int Factorial(int n)
{
    static int f = 1;   // 静态变量，初始化为1，调用时不再重新初始化
    f*=n;
    return f;           // 离开函数后，静态变量f的值被保存
}






















