
#include <iostream>
using namespace std;
//int main()
//{
//	int a, b;
//	cout << "�����������������м��ÿո�ֿ�:";
//	//����
//	cin >> a >> b;
//	//���
//	cout << "��������" << a << "," << b << endl;
//	//cout << "����" << endl;
//	//cout << "Hello world";
//	return 0;
//}


//����ÿ������������c++��ռ�����ֽ�
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
//    cout << 100 << endl;    //ʮ����
//    cout << -200 << endl;
//    cout << 034 << endl;   //�˽�����0��ͷ
//    cout << 076 << endl;
//    cout << 0x23 << endl;   //35   16����0x��ͷ
//    cout << 0x3F << endl;   //63
//    cout << -0x3B << endl;  // 59
//    return 0;
//}

//���ͳ���
//��׺U �޷���  L ��������


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



// ----ת���ַ� ------
//int main()
//{
//    cout << '\101' << '\n';   //101Ϊ8����
//    cout << '\x41' << '\n';   //41Ϊ16����
//    cout << '\t' << '\t' << '\n'; //����һ���Ʊ�λ���t
//    cout << '\"' << '\n';
//    cout << '\'' << '\n';
//    cout << '\\' << '\n';       //���
//    cout << '\a';               //����
//    cout << "abcd" << '\b' << '\b' << '*' << '\n';  //    \b---��ʾ�˸�    ��ʾ�˸�
//
//
//    return 0;
//}
//""��ʾ�ַ����Ŀ�ʼ�ͽ���


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

//#define PI 3.14  //ʹ�ú궨�峣��
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
//    //cout << 35.0 / 10 << endl;    //���ܶ�ʵ����������ֻ�ܶ�������������ȡ��
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
//    s1 = 1 / 2 * a * h;  //    1/2=0,��ʹ����ʽ�ӱ�Ϊ0
//    s2 = float(1) / 2 * a * h;   // ǿ������ת������1ǿתΪfloat������
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
//    // &&��ʾ�߼���
//    cout << "  (a>b) && (c>b) ?  " << ((a > b) && (c > b)) << endl;     //F
//    // ||��ʾ�߼���
//    cout << "  (a>b) || (c>b) ?  " << ((a > b) || (c > b)) << endl;     // T
//    cout << "  (a!=b) && (c!=b) ?  " << ((a != b) && (c != b)) << endl;  // T
//    //! ��ʾ�߼���
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
////�ж� a<b   ���㷵��a �����㷵��b
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
// ����һ�����ĸ�λʮλ�Ͱ�λ
//int main()
//{
//    int number, units, tens, hundreds;//��λ������λ��ʮλ����λ
//    cout << "������һ����λ��: ";
//    cin >> number;
//    hundreds = number / 100;
//    tens = (number - 100 * hundreds) / 10;
//    units = number - 100 * hundreds - 10 * tens;
//    cout << "������İ�λ��ʮλ����λ�ֱ���";
//    cout << hundreds << ", " << tens << ", ";
//    cout << units << endl;
//    return 0;
//}

//�����¶�ת��Ϊ�����¶�

//
//int main()
//{
//    float f, c;
//    cout << "�����뻪���¶� ��";
//    cin >> f; 
//    // !!!! ����д��  5/9*(f-32)
//    c = 5.0 / 9 * (f - 32);
//    cout << "�����¶��ǣ�" << c << endl;
//
//    return 0;
//
//}

//��Բ���ܳ������ �� ��������

//int main()
//{
//    const float PI = 3.14;
//    float l, s, v, r;
//    cout << "������뾶";
//    cin >> r;
//    l = 2 * PI * r;
//    s = PI * r * r;
//    v = 4.0 / 3 * PI * r * r * r;
//    cout << "Բ���ܳ���:" << l << endl; 
//    cout << "Բ�������:" << s << endl;
//    cout << "��������:" << v << endl;
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
//    cout << "����������������";
//    cin >> a >> b;
//    if (a>b)
//    {
//        max = a;
//    }
//    else
//    {
//        max = b;
//    }
//    cout << "�������нϴ���ǣ�" << max;
//
//
//    return 0;
//}





//
//int main()
//{
//    int score;
//    cout << "������ɼ�";
//    cin >> score;
//    if (score<60)
//    {
//        cout << "��������Ҫ����" << endl;
//    }
//    cout << "�������" << endl;
//    return 0;
//
//}



//�������������������������
//int main()
//{
//    int a, b, c;
//    cout << "������������";
//    cin >> a >> b >> c;
//    if (a>b)
//    {
//        if (a>c)
//        {
//            cout << "��������������" << a;
//        }
//        else
//        {
//            cout << "��������������" << c;
//        }
//
//    }
//    else
//    {
//        if (b>c)
//        {
//            cout << "��������������" << b;
//        }
//        else
//        {
//            cout << "��������������" << c;
//        }
//    }
//
//    return 0;
//}


//int main()
//{
//    int s;
//    cout << "������ɼ�";
//    cin >> s;
//    if (s>90)
//    {
//        cout << "��" << endl;
//    }
//    else if (s>=80)
//    {
//        cout << "��" << endl;
//    }
//    else if (s>=70)
//    {
//        cout << "��" << endl;
//    }
//    else if (s >= 60)
//    {
//        cout << "����" << endl;
//    }
//    else
//    {
//        cout << "������" << endl;
//    }
//    return 0;
//}




// ���������ƶ�ÿ�����м���  ------------------------------------------------------------------------δ��

//3-7
int main()
{
    int year, month;
    int days;
    cout << "���������£����Կո�ָ���ݺ��·ݣ�";
    cin >> year >> month;

    return 0;
}




