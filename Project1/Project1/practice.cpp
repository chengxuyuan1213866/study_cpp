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


// ð�ݷ�����
//#include <iomanip>
//int main()
//{
//	int a[10],i,j,t;
//	cout << "������10���������ÿո�ֿ�:" << " ";
//	for ( i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	for ( i = 0; i < 10-1; i++)
//	{
//		for ( j = 0; j < 10-i-1; j++)
//		{
//			if (a[j]>a[j+1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	cout << "���������ݣ�";
//	for ( i = 0; i < 10; i++)
//	{
//		cout << setw(5) << a[i];
//	}
//	cout << endl;
//
//	return 0;
//}


//int main()
//{
//	const int NUM = 2;
//	double a[NUM][2];
//	int i;
//	for ( i = 0; i < NUM; i++)
//	{
//		cout << "��������ѧ�ɼ�" << "  ";
//		cin >> a[i][0];
//	}
//	for (i = 0; i < NUM; i++)
//	{
//		cout << "������Ӣ��ɼ�" << "  ";
//		cin >> a[i][1];
//	}
//	for ( i = 0; i < NUM; i++)
//	{
//		cout << i << "��ѧ�����ܳɼ�Ϊ" << a[i][0] << "+" << a[i][1] << "=" << a[i][0] + a[i][1] << endl;
//	}
//
//
//
//
//	return 0;
//}



//int main()
//{
//	int a[4][4] = { {11,25,35,75},
//					{14,52,63,45},
//					{42,52,47,58},
//					{74,58,65,75} };
//	int i, j, max;
//	for ( i = 0; i < 4; i++)
//	{
//		for ( j = 0; j < 4; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	max = a[0][0];
//	for ( i = 0; i < 4; i++)
//	{
//		if (a[i][i]>max)
//		{
//			max = a[i][i];
//		}
//	}
//	cout << "�Խ����ϵ����ֵ�ǣ�" << max << endl;
//
//	return 0;
//}





//107ҳ
//�۰����
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	cout << "������1-10֮����Ҫ���ҵ����֣�" << " ";
//	cin >> k;
//	int len = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = len - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k>a[mid])
//		{
//			left = mid+1;
//		}
//		else if(k<a[mid])
//		{
//			right = mid-1;
//		}
//		else
//		{
//			cout << "�ҵ����±�Ϊ" << mid << endl;
//			break;
//		}
//
//	}
//	if (left>right)
//	{
//		cout << "�Ҳ���" << endl;
//	}
//	return 0;
//}


//int main()
//{
//	int a, *p1;
//	double b, *p2;
//	char c, *p3;
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	*p1 = 10;
//	*p2 = 10.2;
//	*p3 = 'A';
//	cout << a << " " << b << " " << c << endl;
//	cout << *p1 << " " << *p2 << " " << *p3 << endl;   //��ӷ�������� *	
//	cout << p1 << " " << p2 << " " << p3 << endl;
//	cout << &a << " " << &b << " " << &c << endl;
//	cout << (double*)(&c) << endl;  //ǿ�ƽ�c��ָ��ת��Ϊdouble�͵�ָ��
//	return 0;
//}





//int main()
//{
//	int a, b, z;
//	int *p1, *p2, *p;
//	p = &z;
//	cout << p << endl;
//	cout << "�������������������ո�ֿ�" << " ";
//	cin >> a >> b;
//	p1 = &a;
//	p2 = &b;
//	if (*p1>*p2)
//	{
//		p1 = p;
//		p1 = p2;
//		p2 = p;
//	}
//	cout << "min = " << *p1 << "max = " << *p2 << endl;
//	return 0;
//}



//int main()
//{
//	int a[3][3] = { {1,0,0},
//					{0,1,0},
//					{0,0,1}};
//	int *p[3];     //��������ָ������
//	p[0] = a[0];	// a[0]�Ƕ�ά�����һ�е��׵�ַ   & a[0][0]
//	p[1] = a[1];	// a[1]�Ƕ�ά�����һ�е��׵�ַ
//	p[2] = a[2];	// a[2]�Ƕ�ά�����һ�е��׵�ַ
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			//cout << p[i][j] << " ";
//			cout << *(p[i] + j) << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int a, *p1, **p2;
//	double b, *p3, **p4;
//	a = 10;
//	b = 22.3;
//	p1 = &a;
//	p3 = &b;
//	p2 = &p1;
//	p4 = &p3;
//	**p2 = 20;
//	**p4 = 45.0;
//	cout << a << "\t" << *p1 << "\t" << **p2 << "\t" << "p1�ĵ�ַ" << p2 << endl;
//	cout << b << "\t" << *p3 << "\t" << **p4 << "\t" << "p3�ĵ�ַ" << p4 << endl;
//
//	return 0;
//}


// ����ָ��
// ����ָ����ָ������ָ�룬ָ��ָ����ڴ��ַ�������ǲ����޸ĵ�
// ����    const char *p;

//int main()
//{
//	int* p1, * p2;
//	p1 = new int(10);
//	p2 = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	cout << *p1 << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *(p2 + i) << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << p2[i] << " ";
//	}
//	cout << endl;
//	delete p1;
//	delete[]p2;
//
//	return 0;
//}



// ѡ������  132
int main()
{
	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
    int len = sizeof (a)/sizeof (a[0]);
	for (int  i = 0; i < len-1; i++)
	{
        int min = a[i];
        int temp;
		for (int j = i+1; j < len; j++)
		{
			if (a[j]<a[min])
            {
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }


        }

	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}


	return 0;
 }





