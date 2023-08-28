//
// Created by Administrator on 2023/8/15.
//

/*namespace NameSpace1
{
    int a;
    int f1();
    float f2();
}
namespace ns1 = NameSpace1;
NameSpace1::a = NameSpace1::f1();*/

#include <iostream>
using namespace std;
//1.域运算符    **" ::"**
/*namespace ns1
{
    int fun(int x,int y);
}
namespace ns2
{
    int fun(int x,int y);
    namespace ns3
    {
        int fun(int x,int y);
    }
}
int ns1::fun(int x, int y)
{
    return x+y;
}
int ns2::fun(int x, int y)
{
    return x-y;
}
int ns2::ns3::fun(int x, int y)
{
    return x*y;
}

//函数定义也可直接写在命名空间中
namespace ns4{
    int fun(int x,int y)
    {
        return x/y;
    }
}
int main()
{
    cout << ns1::fun(5,3)<<endl;
    cout << ns2::fun(5,3)<<endl;
    cout << ns2::ns3::fun(5,3)<<endl;
    cout << ns4::fun(6,2) << endl;
    return 0;
}*/
// 2.使用using声明
/*namespace ns1
{
    int fun1(int x,int y)
    {
        return x+y;
    };
    int fun2(int x,int y)
    {
        return x-y;
    };
    int fun3(int x,int y)
    {
        return x*y;
    }
}
using ns1::fun1;
using ns1::fun2;
int fun3(int x,int y);
int main()
{
    cout << fun1(3,2) << endl;
    cout << fun2(3,2) << endl;
    cout << ns1::fun3(3,2) << endl;

    // using声明的函数，不能再定义同名函数了
    // 但是using没有声明的可以


    return 0;
}

int fun3(int x,int y)
{
    return x+y;
}*/
// 3.使用using编译指令

/*namespace ns1
{
    int fun1(int x,int y)
    {
        return x+y;
    };
    int fun2(int x,int y)
    {
        return x-y;
    };
    int fun3(int x,int y)
    {
        return x*y;
    }
}

using namespace ns1;

int main()
{
    cout << fun1(3,2) << endl;
    cout << fun2(3,2) << endl;
    cout << fun3(3,2) << endl;

    return 0;
}*/
