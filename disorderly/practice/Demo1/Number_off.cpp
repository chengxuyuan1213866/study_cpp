//
// Created by Administrator on 2023/8/3.
//

#include <iostream>
using namespace std;


int main()
{
    int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
    int len = sizeof (a)/sizeof (a[0]);
    int i,j,min;
    for(i=0;i<len-1;i++) // 外层循环
    {
        min = i; // 外层每循环一次，将i的值赋给min
        for(j=i+1;j<len;j++)// 内层循环
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        int temp = a[min];  // 交换位置
        a[min] = a[i];
        a[i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}






















