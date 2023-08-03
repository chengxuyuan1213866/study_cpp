//
// Created by Administrator on 2023/8/3.
//

#include "heart.h"
#include <iostream>
#include <cmath>





void PrintHeart(int  size)
{
    for (float y = size; y >-size; y-=0.1)
    {
        for (float x = -size;  x< size; x += 0.05)
        {
            float eq = x * x +pow(5.0*y/2.0-sqrt(abs(x)),2);
            if (eq < size * size)
            {
                std::cout<< "*";
            }
            else
            {
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a = 1;
    PrintHeart(a);
    return 0;
}





















