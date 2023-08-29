/*
//
// Created by Administrator on 2023/8/28.
//

//要实现深拷贝
//要自己定义拷贝构造函数


#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class Student
{
private:
    int number;         //学号
    char *name;         //姓名

public:
    Student(int no, char* n);
    void show();        // 显示学生信息
    Student(const Student &s);  // 重写拷贝构造函数
    void setNumber(int number);
    void setName(char *name);
    // 显示学生信息
};

Student::Student(const Student &s) {
    number = s.number;
    name = new char [strlen(s.name)+1];
    strcpy(name,s.name);
}

void Student::setNumber(int no) {
    Student::number = no;
}

void Student::setName(char *n) {
    if (name != NULL)
    {
        delete []name;
        name  = new char[strlen(name) + 1];
        strcpy(name,n);
    }
}
Student::Student(int no, char *n) {
    number = no;
    name = new char[strlen(n)+1];  // 申请内存
    strcpy(name,n);                 // 字符串赋值
}
// 对于一般类可以使用初始化表初始化，也可以在函数中初始化
//Student::Student(int number, char *name) : number(number), name(name) {}   //初始化表对数据成员初始化

void Student::show() {
    cout << "学号" << number << "\t";
    cout << "姓名" << name << "\n";
}
int main()
{
    Student s1(20200101, "张三");
    Student s2(s1);  //这里使用默认的拷贝构造函数
    s1.show();
    s2.show();
    cout<< "------------------------------------\n";
    s2.setNumber(20201301078);
    s2.setName("张张");
    s1.show();
    s2.show();
    return 0;
}

//学号20200101	姓名张三
//学号20200101	姓名张三
//------------------------------------
//学号20200101	姓名张三
//学号-1273535402	姓名张张

// 深拷贝，操作的是两个对象空间






















*/
