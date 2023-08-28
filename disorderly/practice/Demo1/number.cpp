//
// Created by Administrator on 2023/8/7.
//
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    int m,i;
    m = 10;  //  表示当前剩余人数
    i = 0;   // 1--3计数
    while(m>1)
    {
        if (*p != -1)
        {
            i++;
            if (i==3){
                m--;
                *p = -1;
                i = 0;
            }

        }
        p++;
        if (p>&a[9])
        {
            p=a;
        }

    }
    for (i = 0; i < 10; i++) {
        if (a[i] != -1)
            break;
    }
    cout<< "最后剩下的序号是:" << i+1 <<endl;
    return 0;
}



