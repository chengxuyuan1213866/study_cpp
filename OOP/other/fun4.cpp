//
// Created by Administrator on 2023/8/16.
//

/*
#include <iostream>
using namespace std;

void A(int (*fb)(int ), int y) {

    clock_t start = clock();
    fb(2.5);
    clock_t stop = clock();
    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << elapsed << endl;
}
int B(int x)
{
    clock_t start = clock();
    int  i = 0;
    while (i <= 10000000)
        i++;
    clock_t stop = clock();

    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << elapsed << endl;
    return 0;
}
int C(int &b,int c)
{

    cout<<"引用+函数指针调用" << endl;
    return 0;
}
int main()
{
    int (*fb)(int );
    fb = B;
    A(B, 2);
    int a = fb(2);

    C(a,2);
    return 0;
}*/
