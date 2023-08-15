//
// Created by Administrator on 2023/8/11.
//

#include <iostream>
using namespace std;


// 位运算
/*int main()
{
    // 1.按位与  &
    // 对应二进制位都是1才为1否则为0
    // 9    1001
    // 7    0111
    // 9&7  0001    1
    cout << (9&7)  <<endl;
    // 2.按位或
    // 对应二进制只要有1就是1
    // 9    1001
    // 7    0111
    // 9|7  1111   15
    cout << (9|7) << endl;
    // 3.按位异或
    // 对应位不相同为1，相同为0
    // 9    1001
    // 7    0111
    // 9^7  1110   14
    cout << (9^7) << endl;
    // 4.按位取反
    // 按位取反是一个单目运算符，对二进制每一位取反，对应二进制原来是1现在是0
    // 9    ...1001
    // ~9    ...0110
    cout << ~9 << endl;
    // 5. 左位移
    // 左位移是一个双目运算符
    // 作用是使运算发左侧的操作数个位左移指定位数，地位补0，高位舍弃
    cout << (7<<2) << endl;
    // 6. 右位移
    // 右位移是一个双目运算符
    // 作用是使运算发左侧的操作数个位左移指定位数，地位补0，高位舍弃
    // 对无符号数和有符号的正数，高位补0
    // 对有符号的负数，有些系统补0(称为逻辑右移),有些系统补1(称为算术右移)
    cout << (7>>2) <<endl;
    return 0;
}*/
// 位运算实例

/*int main()
{
    int a = 25;
    int b = 23;
    // 0xf 后四位是1，其他位都是0
    // ~oxf  后四位是0，其他位是1
    a = a & (~0xf);
    b = b | (0xf);
    cout << a << endl;
    cout << b << endl;
    return 0;
}*/

// 结构类型
// 结构也称结构体，
/*struct stu{
    int no;
    char sex;
    int age;
    float score;
};
stu s1,s2;
// C++中可以直接定义结构变量
// 如 struct student s1,s2
int main()
{
    stu s1;
    s1.no = 1313;
    s1.sex = 'm';
    s1.age = 18;
    s1.score = 99;
    cout << "学号: " << s1.no <<endl;
    cout << "性别: " << s1.sex <<endl;
    cout << "年龄: " << s1.age <<endl;
    cout << "成绩: " << s1.score <<endl;
    cout << "结构体占用内存字节数" << sizeof(stu) << endl;
    cout << "结构体变量占用内存字节数" << sizeof(s1) << endl;


    return 0;
}*/

// 1. 结构类型的嵌套
/*struct date{
    int year;
    int month;
    int day;
};
struct student{
    int no;
    char sex;
    struct date birthday;   // 嵌套date类型的结构变量
    float score;
};
student s = {123131,'m',{2002,10,21},95};*/
// struct student s = {123131,'m',2002,10,21,95};  这种方式与上面等价

/*struct date{
    int year;
    int month;
    int day;
};
struct student{
    int no;
    char gender;
    struct date birthday;
    float score;
};
int main()
{
    student s = {10086,'m',2002,10,21,78};
    student s1 = {10000,'w',{2003,10,21},98};
    cout << "学号是：" << s.no <<endl;
    cout << "性别是：" << s.gender <<endl;
    cout << "出生年月日是：" << s.birthday.year << "/" << s.birthday.month << "/" << s.birthday.day <<endl;
    cout << "成绩是：" << s.score <<endl;
    cout << "学号是：" << s1.no <<endl;
    cout << "性别是：" << s1.gender <<endl;
    cout << "出生年月日是：" << s1.birthday.year << "/" << s1.birthday.month << "/" << s1.birthday.day <<endl;
    cout << "成绩是：" << s1.score <<endl;
    return 0;
}*/

// 结构数组
/*struct student{
    int no;
    char gender;
    int age;
    float score;
};

int main()
{
    student s[3] = {
            {110,'m',20,96},
            {152,'w',45,85},
            {159,'w',54,78},
            };
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += s[i].score;
    }
    cout << "平均成绩为" << sum/3 << endl;
    return 0;
};*/
// 结构指针
/*float avg(struct student *p,int n);
 struct student{
     int no;
     char gender;
     int age;
     float score;
 };
 int main()
 {
     student s[3] = {
             {110,'m',20,96},
             {152,'w',45,85},
             {159,'w',54,78},
     };
     cout << "平均成绩是" << avg(s,3) <<endl;

     return 0;
 }
float avg(struct student *p,int n)
{
     float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (p+i) ->score;
    }
    return sum/n;
}*/
// 联合
// 下面声明一个联合data
/*
union da{
    int i;
    char ch;
    float f;
};
int main()
{
    da d;
    d.i = 97;                       // 给一个成员赋值，影响所有成员
    cout << d.i << "," << d.ch << "," << d.f << endl;
    d.ch = 'A';
    cout << d.i << "," << d.ch << "," << d.f << endl;
    d.f = 100;
    cout << d.i << "," << d.ch << "," << d.f << endl;
    cout << sizeof(da) <<endl;    // 联合类型占用的字节数
    cout << sizeof(d) << endl;
    return 0;
}*/
/*// 求一个整数高位数和低位数
union word{
    unsigned char ch[2];  // 共两个字节
    unsigned short num;     // 2个字节
};
int main()
{
    word w;
    w.num = 2856;
    cout << w.num <<"低位数为："  << (int) w.ch[0] << "高位数为：" << (int)w.ch[1] << endl;
    w.ch[0] = 93;
    cout << w.num <<"低位数为："  << (int) w.ch[0] << "高位数为：" << (int) w.ch[1] << endl;
    return 0;
}*/
// 枚举
/*enum weekday {Sun = 7,Mon = 1,Tue,Wed,Thu,Fri,Sat};

int main()
{
    int day;
    cout << "请输入星期几:" << " ";
    cin >> day;
    // weekday day = Mon;
    int a = day;

    // day = a;
    day = (weekday) a;           // 可以强制类型转换
*//*    switch (day) {
            case Sun:cout << "星期天" <<endl;
                break;
            case Mon:cout << "星期一" <<endl;
                break;
            case Tue:cout << "星期二" <<endl;
                break;
            case Wed:cout << "星期三" <<endl;
                break;
            case Thu:cout << "星期四" <<endl;
                break;
            case Fri:cout << "星期五" <<endl;
                break;
            case Sat:cout << "星期六" <<endl;
                break;
        default:
            cout << "输入有误" <<endl;
            break;
    }*//*
    cout << day << endl;
    return 0;
}*/





















