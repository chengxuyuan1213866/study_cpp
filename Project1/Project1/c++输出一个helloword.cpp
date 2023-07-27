
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

//#define PI 3.14  //使用宏定义常量
//int main()
//{
//    const int HOURS = 24;
//    const int MINUTES = 60; 
//    cout << PI * 10 * 10 << endl;
//    cout << HOURS * MINUTES << endl;
//    cout << HOURS * 60 << endl;
//    return 0;
//}


//int main()
//{
//    float a = 1.2, b(2.3), c;
//    int d = 10;
//    int e;
//    cout << a << " " << b << " " << d << endl;
//    //cout << c << " " << e << endl; 
//    a = a + b;
//    c = a + 20.5;
//    e = d + 100;
//    cout << a << " " << b << " " << c << endl;
//    cout << d << " " << e << endl;
//    return 0;
//}


//int main() 
//{
//    cout << 35 + 10 << " ";
//    cout << 35 - 10 << " ";
//    cout << 35 * 10 << " ";
//    cout << 35 % 10 << " ";
//    cout << 35 / 10 << endl;
//    cout << 35.0 + 10.0 << " ";
//    cout << 35.0 - 10.0 << " ";
//    cout << 35.0 * 10.0 << " ";
//    cout << 35.0 / 10.0 << endl;
//    //cout << 35.0 / 10 << endl;    //不能对实数求余数，只能对两个整数进行取余
//
//
//
//    return 0;
//
//}


//int main()
//{
//    char c1 = 'A', c2 = 'a', c3, c4, c5;
//    c3 = c1 + 1;
//    c4 = c1 + 10;
//    c5 = c4 - 5;
//    cout << c1 << " " << c2 << " " << c3 << " ";
//    cout << c4 << " " << c5 << endl;
//    c3 = c2 + 1;
//    c4 = c2 + 10;
//    c5 = c4 - 5;
//    cout << c1 << " " << c2 << " " << c3 << " ";
//    cout << c4 << " " << c5 << endl;
//    cout << c2 - c1 << endl;
//    char c6 = c1 - 25;
//    cout << c6 << endl;
//    return 0;
//}

//int main()
//{
//    int i = 10, j = 10, k, l, m, n;
//    k = i++;
//    l = j--;
//    m = ++i;
//    n = --j;
//    cout << i << " ";  //12
//    cout << j << " ";   //8
//    cout << k << " ";   //10
//    cout << l << " ";   //10
//    cout << m << " ";   //12
//    cout << n << endl;  //8
//
//    return 0;
//}

//int main()
//{
//    char c1 = 'A', c2;
//    int a1 = 10, a2;
//    c2 = c1 + 5;
//    a2 = a1 + 20.6;
//    cout << c2 << " " << c1 + 5 << endl;
//    cout << a2 << " " << a1 + 20.6 << endl;
//    return 0;
//}


//int main()
//{
//    float s1, s2, s3, a, h;
//    a = 4.0;
//    h = 5.0;
//    s1 = 1 / 2 * a * h;  //    1/2=0,会使整个式子变为0
//    s2 = float(1) / 2 * a * h;   // 强制类型转换，将1强转为float型数据
//    s3 = 1 / (float)(2) * a * h;
//    cout << s1 << " ";
//    cout << s2 << " ";
//    cout << s3 << endl;
//
//    return 0;
//}


//int main()
//{
//    int a, b, c, d;
//    a = 10;
//    a += 20;
//    cout << a << endl;   //30
//    a -= 5;
//    cout << a << endl;   //25   
//    a *= 5 + 5;
//    cout << a << endl;   //250
//    a /= 5 - 3;
//    cout << a << endl;  //125
//    a %= 5 + 3;         
//    cout << a << endl;  //5
//
//
//    return 0;
//}

//int main()
//{
//    int a, b;
//    a = 4;
//    b = 10;
//    cout << "a>b  ? " << (a > b) << endl;   // F
//    cout << "a>=b ? " << (a >= b) << endl;   //F
//    cout << "a<b  ? " << (a < b) << endl;     //T
//    cout << "a<=b ? " << (a <= b) << endl;   //T
//    cout << "a==b ? " << (a == b) << endl;   //F
//    cout << "a!=b ? " << (a != b) << endl;   //T
//
//    return 0;
//}

//int main()
//{
//    int a = 4, b = 10, c = 20;
//    // &&表示逻辑与
//    cout << "  (a>b) && (c>b) ?  " << ((a > b) && (c > b)) << endl;     //F
//    // ||表示逻辑或
//    cout << "  (a>b) || (c>b) ?  " << ((a > b) || (c > b)) << endl;     // T
//    cout << "  (a!=b) && (c!=b) ?  " << ((a != b) && (c != b)) << endl;  // T
//    //! 表示逻辑非
//    cout << "  !(c>b) ?  " << !(c > b) << endl;                             //F
//    cout << "  !(a>b) || (c>b) ?  " << (!(a > b) && (c > b)) << endl;      //T 
//    cout << "  (a>0) && (c>b) ?  " << ((a > 0) && (c > b)) << endl;         //T
//
//
//    return 0;
//}

//int main()
//{
//    int a = 10, b = 20, max, min;
//    max = a > b ? a : b;
//    min = a < b ? a : b;
////判断 a<b   满足返回a 不满足返回b
//    cout << "max = " << max << endl;
//    cout << "min = " << min << endl;
//
//
//
//    return 0;
// }


//----------------------------------------20--------------------------
// 
// 
// 计算一个数的个位十位和百位
//int main()
//{
//    int number, units, tens, hundreds;//三位数，个位，十位，百位
//    cout << "请输入一个三位数: ";
//    cin >> number;
//    hundreds = number / 100;
//    tens = (number - 100 * hundreds) / 10;
//    units = number - 100 * hundreds - 10 * tens;
//    cout << "这个数的百位、十位、个位分别是";
//    cout << hundreds << ", " << tens << ", ";
//    cout << units << endl;
//    return 0;
//}

//华氏温度转换为摄氏温度

//
//int main()
//{
//    float f, c;
//    cout << "请输入华氏温度 ：";
//    cin >> f; 
//    // !!!! 不能写成  5/9*(f-32)
//    c = 5.0 / 9 * (f - 32);
//    cout << "摄氏温度是：" << c << endl;
//
//    return 0;
//
//}

//求圆的周长、面积 ， 球体的体积

//int main()
//{
//    const float PI = 3.14;
//    float l, s, v, r;
//    cout << "请输入半径";
//    cin >> r;
//    l = 2 * PI * r;
//    s = PI * r * r;
//    v = 4.0 / 3 * PI * r * r * r;
//    cout << "圆的周长是:" << l << endl; 
//    cout << "圆的面积是:" << s << endl;
//    cout << "球的体积是:" << v << endl;
//    return 0;
//}

//3-1
//int main()
//{
//    int a = 10, b = 20, c;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//    c = a;
//    a = b;
//    b = c;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//    return 0;
//}


//int main()
//{
//    int a, b, max;
//    cout << "请输入两个整数：";
//    cin >> a >> b;
//    if (a>b)
//    {
//        max = a;
//    }
//    else
//    {
//        max = b;
//    }
//    cout << "两个数中较大的是：" << max;
//
//
//    return 0;
//}





//
//int main()
//{
//    int score;
//    cout << "请输入成绩";
//    cin >> score;
//    if (score<60)
//    {
//        cout << "不及格，需要补考" << endl;
//    }
//    cout << "程序结束" << endl;
//    return 0;
//
//}



//输入三个数，输出其中最大的数
//int main()
//{
//    int a, b, c;
//    cout << "请输入三个数";
//    cin >> a >> b >> c;
//    if (a>b)
//    {
//        if (a>c)
//        {
//            cout << "三个数中最大的是" << a;
//        }
//        else
//        {
//            cout << "三个数中最大的是" << c;
//        }
//
//    }
//    else
//    {
//        if (b>c)
//        {
//            cout << "三个数中最大的是" << b;
//        }
//        else
//        {
//            cout << "三个数中最大的是" << c;
//        }
//    }
//
//    return 0;
//}


//int main()
//{
//    int s;
//    cout << "请输入成绩";
//    cin >> s;
//    if (s>90)
//    {
//        cout << "优" << endl;
//    }
//    else if (s>=80)
//    {
//        cout << "优" << endl;
//    }
//    else if (s>=70)
//    {
//        cout << "良" << endl;
//    }
//    else if (s >= 60)
//    {
//        cout << "及格" << endl;
//    }
//    else
//    {
//        cout << "不及格" << endl;
//    }
//    return 0;
//}




// 根据年月推断每个月有几天  ------------------------------------------------------------------------未作

//3-7
int main()
{
    int year, month;
    int days;
    cout << "请输入年月，并以空格分隔年份和月份：";
    cin >> year >> month;

    return 0;
}




