#include <iostream>
using namespace std;

//������
//ѭ���ṹ

//int  main()
//{
//	int i;
//	int sum = 0;
//	for ( i = 1; i < 101; i++)
//	{
//		sum += i;
//	}
//	cout << "1-100���ۼӺ���" << sum << endl;
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	cout << "ˮ�ɻ����У�";
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
//	cout << "������һ������" << " ";
//	cin >> n;
//	while (i <= n)
//	{
//		sum *= i;
//		i++;
//	}
//	cout << "sum=" << sum << endl;
//	return 0;
//}


//while  �����ж���ִ��
//do ... while ����ִ�����жϣ�
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


//��1-100�в��ܱ�3����������֮��
//int main()
//{
//	int i;
//	int sum = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0)     // �ܱ�3����
//			continue;		// �������䲻ִ�У�����ִ��forѭ���ĵ��������ʽi++
//		sum += i;
//	}
//	cout << "sum=" << sum << endl;
//	return 0;
//}

//goto ���  -- ������ת�����
//
//����goto���ʵ����1-100�ۼӺ�
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



//�˷��ھ���

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


//���ascii����32-128���ַ�
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
//	cout << "��һ����" << n << endl;
//	return 0;
//}

//------------------------����----------------------------------




//#define NUM 5
//int main()
//{
//	double s[NUM];
//	double sum = 0, a;
//	int i;
//	for ( i = 0; i < NUM; i++)
//	{
//		cout << "������ѧ���ɼ�" << " ";
//		cin >> s[i];
//	}
//	for ( i = 0; i < NUM; i++)
//	{
//		sum += s[i];
//	}
//	a = sum / NUM;
//	cout << "ѧ����ƽ���ɼ�Ϊ" << a << endl;
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
//	cout << "������10���������ÿո�ֿ�:" << " ";
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













