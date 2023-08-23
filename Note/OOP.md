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

## 类的成员函数

可以在类中直接定义，也可以在类的外部定义，

```c++
// 在外部定义的格式
函数类型 类名::成员函数名(参数说明)
{
    函数体
}
```

```c++
// 将方法直接在类中
#include <iostream>
using namespace std;
#define PI 3.1415926535

class Circle{
private:
    double radius;
public:
    double getRadius() const {
        return radius;
    }

    void setRadius(double radius) {
        Circle::radius = radius;
    }
    double getArea()
    {
        return PI*radius*radius;
    }
};

int main()
{
    Circle c1;
    c1.setRadius(3.0);
    cout << "圆的面积是" <<c1.getArea() << endl;
    return 0;
}
```

## 内联函数成员

类的成员函数也可以是内联函数，要使一个类成员函数成为内联函数，有两种方法

- 一种是将成员函数的定义直接写在类中,如果函数足够简单，那么C++编译系统会将类中定义的成员函数当作内联函数处理；
- 另一种是在类的外部定义函数，并使用**inline**指定为内联函数

```c++
inline void Circle::setRadius(double r)
{
    radius = r;
}
```

```c++
#include <iostream>
using namespace std;
#define PI 3.1415926535

class Circle{
private:
    double radius;
public:
    double getRadius() const {
        return radius;
    }

    void setRadius(double r);
    double getArea()
    {
        return PI*radius*radius;
    }
};
inline void Circle::setRadius(double r)
{
    radius = r;
}
int main()
{
    Circle c1;
    c1.setRadius(3.0);
    cout << "圆的面积是" <<c1.getArea() << endl;
    return 0;
}
```

## 带默认值参数的成员函数

与一般函数相同，类的成员函数也可以带有默认的参数值。

默认参数值只能在声明或者定义的**某一处**给出，不能在两处都给出

![image-20230823011059905](https://s2.loli.net/2023/08/23/r9h5pKOYHubi3J2.png)

## 验证对象所占内存

```c++
#include <iostream>
class Rect{
private:
    int length;
    int width;
public:
    void setLength(int l) {
        length = l;
    }
    void setWidth(int w) {
        width = w;
    }
    int getArea(){
        return length*width;
    }
    int getPerimeter(){
        return 2*(length+width);
    }
};
```

上面的矩形类，有两个int属性，所以Rect占8个字节

```c++
#include <iostream>
#include "ex10_2Rect.h"
using namespace std;
int main()
{
    Rect c1,c2;
    cout<< sizeof c1 << endl;
    cout << sizeof c2 << endl;
    cout << "c1的地址" << &c1 << endl;
    cout << "c2的地址" << &c2 << endl;
    cout << "c2+1的地址" << &c2+1 << endl;
    cout << "c2+2的地址" << &c2+2 << endl;
    cout << "c2+3的地址" << &c2+3 << endl;
	// 每次对地址增加时，增加8个字节
    return 0;
}
```

## 构造函数

对象初始化时，为数据成员设置初始值，C++提供了构造函数，可以为对象初始化。

构造函数的特点

- 构造函数与类名相同
- 不能定义构造函数的类型（不能指明构造函数的返回值类型）
- 构造函数应该声明为公有的
- 构造函数不能在程序中调用，进行对象初始化时自动调用

构造函数的作用

构造函数的作用就是在创建对象时，利用特定的值构造对象，将对象初始化为一个特定的状态，使此对象与有区别于其他对象的特征

##### 初始化表

```c++
Rect::Rect(int len,int wid) :length(len),width(wid)
{
}
```

##### 默认构造函数

C++会给没有构造函数的类提供一个默认的构造函数，这个默认的构造没有参数，也不做任何事，相当与下面的构造函数

```c++
Rect::Rect()
{
    
}
```



## 构析函数

与变量一样，在函数内部定义的对象称为局部变量，当程序运行离开对象所在函数后，该对象就消失，由于类中成员函数可以有指针，对象中可能会有动态分配的内存，这就需要在对象消失前释放内存，C++提供了构析函数，可以进行内存释放等清理工作。

### 构析函数的特征

1. 构析函数的名字为符号**“~”**加类名
2. **构析函数没有参数，也不能指定返回值类型**
3. 一个类中只能定义一个构析函数，所以构析函数不能重载
4. 当一个类消失时，自动调用构析函数

##### 构析函数的声明

```c++
~Rect();
```

##### 构析函数的定义

```c++
Rect::~Rect()
{
    .......
}
```

```c++
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Student
{
private:
    int number;
    char *name;
    int age;
    float score;
public:
    Student();
    Student(int no, char *n, int a, float s);
    ~Student();
    void show();
};
Student::Student()
{
    number = 0;
    name = NULL;
    age  = 0;
    score = 0;
}
Student::Student(int no, char *n, int a, float s)
{
    number = no;
    name = new char[strlen(n)+1];
    strcpy(name, n);
    age  = a;
    score = s;
}

Student::~Student()
{
    if(name!=NULL)
    {
        cout << name << "同学即将退学" << endl;
        delete []name;   // 释放空间
    }
    else
    {
        cout << "有一个同学即将退学" << endl;
    }
}
void Student::show()
{
    if(name!=NULL)
    {
        cout << "学号:" << number << "\t";
        cout << "姓名:" << name << "\t";
        cout << "年龄:" << age << "\t";
        cout << "成绩:" << score << endl;
    }
}
int main()
{
    Student s1(20200101, "张三", 20, 95);
    Student s2(20200101, "李四", 22, 90);
    s1.show();
    s2.show();
    return 0;
}

```

