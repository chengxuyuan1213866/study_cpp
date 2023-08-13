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
struct date{
    int year;
    int month;
    int day;
};
struct student{
    int no;
    char sex;
    struct date birthday;
    float score;
};
student s = {123131,'m',{2002,10,21},95};
// struct student s = {123131,'m',2002,10,21,95};







