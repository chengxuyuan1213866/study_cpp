//
// Created by Administrator on 2023/8/7.
//
// 输入“abcd123”  输出  “321dcba”

#include <iostream>
using namespace std;
#include <string.h>

//int main()
//{
//    char  arr[] = "abcd123";
//    char *p = arr;
//    int len = strlen(arr)-1;
//    for (int i = 0; i <= len/2; ++i) {
//        char tmp = *(p+len-i);
//        *(p+len-i) = *(p+i);
//        *(p+i) = tmp;
//
//    }
//    for (int i = 0; i <= len; ++i) {
//        cout<<"\t"<<*(p+i)<<endl;
//    }
//
//    return 0;
//}

// ------------------   函数   ----------------------------------

// 函数的声明
// int Max(int a,int b);
//int Power(int x,int n);
//void swap(int *x,int *y);
//
//int main()
//{
//    int x = 2;
//    int y = 4;
//    int *p1 = &x;
//    int *p2 = &y;
//    int z = Max(x,y);
//    int s = Power(x,y);
//    swap(x,y);
//    cout<<"两个函数中的较大值是： "<< z <<endl;
//    cout<<x<<"的"<<y<<"次方的值是" << s<<endl;
//    cout << "x的值是\t" <<x <<"y的值是" <<y <<endl;
//    printf("%d的%d次方是%d",x,y,s);
//    return 0;
//}
//
//int Max(int a,int b)
//{
//    // 比较两个数中的较大值
//    if (a>=b)
//        return a;
//    else
//        return b;
//}
//
//int Power(int x, int n)
//{
//    int result = 1;
//    for (int i = 0; i < n; i++) {
//        result *= x;
//    }
//    return result;
//
//}
//
//void swap(int *x,int *y)
//{
//    int tmp = *x;
//    *x = *y;
//    *y = *x;
//}

// 引用作为函数参数
// 在函数中改变主调函数变量的值，除了传递指针外，还可以传递引用来实现
// 什么是引用 --  引用相当于是变量的别名。在程序中定义的每一个变量，在内部都对应这一个存储单元。变量名就是这个内存单元的名字，引用相当于给这个单元再起一个名字
// 引用的格式
// 类说明符 &引用名 = 变量名;
// 定义引用时一定要初始化


//int main()
//{
//    int a = 1;
//    int c = 10;
//    int &b = a;
//    cout<< a << "\t" << b << "\t" << c << endl;
//    b = c;
//    cout<< a << "\t" << b << "\t" << c << endl;
//    b = 20;
//    cout<< a << "\t" << b << "\t" << c << endl;
//
//
//
//
//    return 0;
//}

// 使用引用作为函数的参数

//void swap(int &x,int &y)
//{
//    int temp = x;
//    x = y;
//    y = temp;
//}
//
//
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    swap(a,b);
//    cout<< "a = " << a << "\t" << "b = " << b << endl;
//    return 0;
//}



// 引用计算两个园的面积

//#define PI 3.14;
//
//
//double area1(double r)
//{
//    // 值传递
//    return r*r*PI;
//
//}
//void area2(double *s)
//{
//    //指针传递
//    *s = (*s)*(*s)*PI;
//}
//void area3(double &s)
//{
//    s = s*s*PI;
//
//}
//
//int main()
//{
//    double r = 2.0;
//    double s = area1(r);
//    double *s = &r;
//    area2(s);
//    double &s = r;
//    area3(s);
//    cout<< "面积为" << s << endl;
//    return 0;
//}



// 编写一个函数，将数组中的元素按相反的顺序存放
//void swap(int arrp[],int len);
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int len = sizeof(arr)/sizeof (arr[0]);
//    swap(arr,len);
//    for (int i = 0;i<len;i++) {
//        cout<< arr[i] << "\t";
//    }
//    return 0;
//}
//void swap(int arr[],int len)
//{
//
//    for (int i = 0; i <= (len-1)/2; i++)
//    {
//        int temp = arr[i];
//        arr[i] = arr[len-1-i];
//        arr[len-1-i] = temp;
//    }
//
//}

/*
void merge(char *a,char *b);
int main()
{
    char ch[10] = "abcdefg";
    char ch1[10] = "12346789";
    merge(ch,ch1);
    cout << ch << endl;
    cout << ch1 << endl;

    return 0;
}
void merge(char *a,char *b)
{
    char *p;
    int len = strlen(a);
    p = a+len;
    while (*b != '\0')
    {
        *p = *b;
        p++;
        b++;
    }
    *p = '\0';
}
*/

// 函数嵌套调用和递归调用
// 函数嵌套调用
/*
long f1(int n);
long f2(int n);

int main()
{
    int n= 5;
    int b = f1(n);
    cout << n << "的阶乘是" << b <<endl;
    return 0;
}

long f2(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}
long f1(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += f2(i);
    }
    return sum;
}
*/

// 函数递归调用
/*long fun(int n);
int main()
{
    int a = 4;
    int b = fun(a);
    cout << b << endl;
    return 0;
}
long fun(int n)
{
    if (n==1){
        return n;
    } else{
        return fun(n-1)*n;
    }



}*/

// 将一个数字字符串转换成对应整数
/*int convent(char *a);
int main()
{
    char a[] = "12345";
    int b = convent(a);
    cout << b <<endl;
    return 0;
}
int convent(char *ch)
{
    int num = 0, digit;
    for (int i = 0; *(ch+i) != '\0'; i++) {
        digit = *(ch+i) - '0';
        num = num*10 +digit;
    }
    return num;


}*/

// 删除字符串中的指定字符
void DelChar(char *ch,char a);
int main()
{
    char a[] = "dawedad";
    int len = strlen(a);
    char b = 'a';
    DelChar(a,b);
    for (int i = 0; i < len; i++) {
        cout<<a[i]<< " ";
    }
    return 0;
}

void DelChar(char *ch,char a)
{
    for (int i = 0; *(ch+i)!='\0'; i++) {
        if (*(ch+i) == a)
        {
            *(ch+i) = ' ';
        }
    }
}



















