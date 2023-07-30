#include <iostream>
using namespace std;

//第四章
//循环结构

//int  main()
//{
//	int i;
//	int sum = 0;
//	for ( i = 1; i < 101; i++)
//	{
//		sum += i;
//	}
//	cout << "1-100的累加和是" << sum << endl;
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	cout << "水仙花数有：";
//	for ( i = 100; i <999; i++)
//	{
//		int h = i / 100;
//		int s = (i- h* 100) / 10;
//		int g = i-h*100-s*10;
//		if (h*h*h+s*s*s+g*g*g==i)
//		{
//			cout << i << " ";
//		}
//	}
//	cout << endl;
//
//
//	return 0;
//}

//4-4
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for ( i = 0; i < 101; i+=2)
//	{
//		sum += i;
//	}
//	cout << "sum= " << sum << endl;
//	return 0;
//}



//int main()
//{
//	int i = 1,n;
//	int sum = 1;
//	cout << "请输入一个整数" << " ";
//	cin >> n;
//	while (i <= n)
//	{
//		sum *= i;
//		i++;
//	}
//	cout << "sum=" << sum << endl;
//	return 0;
//}


//while  是先判断再执行
//do ... while 是先执行再判断！
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i<=100);
//	cout << "sum=" << sum << endl;
//	return 0;
//}

//    


//求1-100中不能被3整除的整数之和
//int main()
//{
//	int i;
//	int sum = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0)     // 能被3整除
//			continue;		// 后面的语句不执行，立即执行for循环的第三个表达式i++
//		sum += i;
//	}
//	cout << "sum=" << sum << endl;
//	return 0;
//}

//goto 语句  -- 无条件转向语句
//
//利用goto语句实现求1-100累加和
//int main()
//{
//	int i = 1;
//	int sum = 0;
//loop:
//	if (i<=100)
//	{
//		sum += i;
//		i++;
//		goto loop;
//	}
//	cout << "sum=" << sum << endl;
//	return 0;
//}



//乘法口诀表

//int main()
//{
//	int i, j;
//	for ( i = 1; i <10; i++)
//	{
//		
//		for (  j= 1;  j<=i; j++)
//		{
//			cout << i << "*" << j << "=" << i * j << "\t";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//输出ascii码在32-128的字符
//int main()
//{
//	unsigned char c;
//	int i = 0;
//	for ( c = 32; c < 128; c++)
//	{
//		cout << c << " " << (int)c << "\t";
//		i++;
//		if (i%10==0)
//		{
//			cout << endl;
//		}
//	}
//	return 0;
//}


//

//int main()
//{
//	int i, n = 1;
//	for ( i = 9; i >0 ; i--)
//	{
//		n=(n + 1) * 2;
//	}
//	cout << "第一天有" << n << endl;
//	return 0;
//}

//------------------------数组----------------------------------




//#define NUM 5
//int main()
//{
//	double s[NUM];
//	double sum = 0, a;
//	int i;
//	for ( i = 0; i < NUM; i++)
//	{
//		cout << "请输入学生成绩" << " ";
//		cin >> s[i];
//	}
//	for ( i = 0; i < NUM; i++)
//	{
//		sum += s[i];
//	}
//	a = sum / NUM;
//	cout << "学生的平均成绩为" << a << endl;
//	return 0;
//}


//#include <iomanip>
//int main()
//{
//	int i;
//	int f[40] = { 1,1 };
//	for ( i = 2; i < 40; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	for ( i = 0; i < 40; i++)
//	{
//		cout << setw(12) << f[i];
//		if ((i+1)%5==0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//	return 0;
//}



//int main()
//{
//	int a[10],i;
//	cout << "请输入10个整数，用空格分开:" << " ";
//	for ( i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	for ( i = 0; i < length; i++)
//	{
//
//	}
//
//
//	return 0;
//}













