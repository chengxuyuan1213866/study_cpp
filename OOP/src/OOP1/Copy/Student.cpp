//
// Created by Administrator on 2023/8/27.
//


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
    ~Student();                 // 构析函数
    void show();                // 显示学生信息
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
        delete []name;
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
    Student s3(s1);  //这里使用默认的拷贝构造函数
    s1.show();
    s3.show();
    return 0;
}



























