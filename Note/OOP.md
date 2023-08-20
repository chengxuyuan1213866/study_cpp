# 面向对象(OOP)-- C++

## 面向过程和面向对象

面向过程设计中，过程是构成程序的基本单位。面向过程以功能为中心，专注于问题的解决。将一个系统分解成若干块，然后对每个模块继续分解，直到功能足够简单，能被一个函数(或过程)实现。当所有功能都实现了，将他们合理地组织起来，整个系统就实现了

面向过程，程序中的数据和处理数据的函数是相互分离的，当数据结构改变时，或者功能需求发生变化时，所有和该类数据结构有关联的函数都要修改，程序的可维护性较差

面向对象程序设计中，构成程序的基本单位是类。面向对象以系统中的关键对象为中心，将系统中的主要对象找出来，抽象出其属性和行为，将这些属性和行为封装在一起形成类，这些类相互合作完成系统的功能。

## 面向对象基本概念

1. 类...
2. 对象..
3. 属性..
4. 方法..

## C++面向对象程序设计的特点

#### 1.封装和数据隐藏

#### 2.继承

#### 3.多态

- ​	静态多态  -- 通过函数重载实现的
- ​    动态多态 -- 通过类的继承和虚函数实现的

类的定义

```c++
class 类名
{
    private:
    私有数据成员和成员函数;
    protected:
    报数数据成员和成员函数;
    public:
    共有数据成员和成员函数;
}
```

```c++
class Rect{
private:
    int length;
    int width;
public:
    void setLength(int l);
    void setWidth(int w);
    int getArea();
    int getPerimeter();
};

void Rect::setLength(int l) {
    length = l;
}
void Rect::setWidth(int w) {
    width = w;
}
int Rect::getArea() {
    return length*width;
}
int Rect::getPerimeter() {
    return 2*(length+width);
}
```

在类外边进行函数定义时，为了指明函数是Rect的成员函数，需要在函数名前用类名进行限制，格式为

```c++
类名::函数名(参数表)
```

## 成员访问控制

类的结构中有

- 数据成员(属性)
- 成员函数(方法)

三种访问权限

1. 私有访问权限private  -- 只允许类中的成员函数访问
2. protected后面声明的数据成员或成员函数具有保护访问权限
3. public后面声明的数据成员或者成员函数具有公有访问权限，在任何函数中都可访问

```c++

#include "Rect.h"
#include <iostream>
using namespace std;
int main()
{
    Rect c1,c2;
    c1.setLength(200);
    c1.setWidth(100);
    c2.setLength(20);
    c2.setWidth(10);
    // c1.length = 20;  // 这一句会报错
    cout << "矩形1的面积" << c1.getArea() << endl;
    cout << "矩形1的周长" << c1.getPerimeter() << endl;
    cout << "矩形2的面积" << c2.getArea() << endl;
    cout << "矩形2的周长" << c2.getPerimeter() << endl;
    return 0;
}
// 'length' is a private member of 'Rect'
```

### 重点！！！！

- 虽然可以使用默认的访问权限，但是为了提高程序的清晰性，提倡使用关键字明确指明成员的访问权限

## 类与结构的比较

类就是在结构的基础上增加了成员函数。事实上，在C++中，类也可以用struct声明

- struct与class的区别是：如果不指定访问权限，前者默认的访问权限是公用的，而后者是私有的

```c++
// 使用struct声明类
struct Rect{
private:
    int length;
    int width;
public:
    void setLength(int l);
    void setWidth(int w);
    int getArea();
    int getPerimeter();
};
```

这种定义方式与class声明的结果完全相同。



