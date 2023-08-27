//
// Created by Administrator on 2023/8/3.
//

#include "heart.h"
#include <iostream>
#include <cmath>
using namespace std;




void PrintHeart(int  size)
{
    for (float y = size; y >-size; y-=0.1)
    {
        for (float x = -size;  x< size; x += 0.05)
        {
            float eq = (x * x +pow(5.0*y/2.0-sqrt(abs(x)),2));
            if (eq < size * size)
            {
                cout<< "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int a = 2;
    PrintHeart(a);
    return 0;
}





















