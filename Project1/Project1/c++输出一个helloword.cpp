
#include <iostream>
using namespace std;
//int main()
//{
//	int a, b;
//	cout << "请输入两个整数，中间用空格分开:";
//	//输入
//	cin >> a >> b;
//	//输出
//	cout << "您输入了" << a << "," << b << endl;
//	//cout << "您好" << endl;
//	//cout << "Hello world";
//	return 0;
//}


//计算每种数据类型在c++中占几个字节
//int main()
//{
//	cout << "short:" << sizeof(short) << endl;   //2
//	cout << "int:" << sizeof(int) << endl;       //4 
//	cout << "long:" << sizeof(long) << endl;	 //4	
//	cout << "float:" << sizeof(float) << endl;		//4
//	cout << "double:" << sizeof(double) << endl;	//8
//	cout << "long long:" << sizeof(long long) << endl;  //8
//	cout << "char:" << sizeof(char) << endl;		//1
//	cout << "bool:" << sizeof(bool) << endl;		//1
//	return 0;
//}

                                                 
//int main()
//{
//    cout << 100 << endl;    //十进制
//    cout << -200 << endl;
//    cout << 034 << endl;   //八进制是0开头
//    cout << 076 << endl;
//    cout << 0x23 << endl;   //35   16进制0x开头
//    cout << 0x3F << endl;   //63
//    cout << -0x3B << endl;  // 59
//    return 0;
//}

//整型常量
//后缀U 无符号  L ：长整型


//int main() 
//{
//    cout << 100 << endl;            //int
//    cout << 100U << endl;           //unsigned
//    cout << 100L << endl;           //long
//    cout << 100LL << endl;          //long long
//    cout << sizeof(100) << endl;    
//    cout << sizeof(100U) << endl;
//    cout << sizeof(100L) << endl;
//    cout << sizeof(100UL) << endl;
//    cout << sizeof(100LL) << endl;
//    cout << sizeof(100ULL) << endl;
//    return 0;
//}



//int main()
//{
//    cout << 2.18 << endl;
//    cout << 2.18F << endl;
//    cout << 2.18L << endl;     //long double
//    cout << sizeof(2.18) << endl;
//    cout << sizeof(2.18F) << endl;
//    cout << sizeof(2.18L) << endl;
//    return 0;
//}



// ----转义字符 ------
//int main()
//{
//    cout << '\101' << '\n';   //101为8进制
//    cout << '\x41' << '\n';   //41为16进制
//    cout << '\t' << '\t' << '\n'; //在下一个制表位输出t
//    cout << '\"' << '\n';
//    cout << '\'' << '\n';
//    cout << '\\' << '\n';       //输出
//    cout << '\a';               //响铃
//    cout << "abcd" << '\b' << '\b' << '*' << '\n';  //    \b---表示退格    演示退格
//
//
//    return 0;
//}
//""表示字符串的开始和结束


//int main()
//{
//    cout << "Hello World\n";
//    //cout << "He said: "I am late."\n";
//    //cout << "c:\program file\Microsoft Office\n";
//    cout << "He said:\" I am late.\"\n";
//    cout << "c:\\program file\\Microsoft Office\n";
//    cout << sizeof("Hello") << "\n";
//    cout << sizeof("Programing\n") << endl;
//    return 0;
//}

//int main()
//{
//    cout << true << "    ";
//    cout << false << endl;
//    return 0;
//
//}

#define PI 3.14  //使用宏定义常量
int main()
{
    const int HOURS = 24;
    const int MINUTES = 60; 
    cout << PI * 10 * 10 << endl;
    cout << HOURS * MINUTES << endl;
    cout << HOURS * 60 << endl;
    return 0;
}















