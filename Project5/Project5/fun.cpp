#include <iostream>
using namespace std;
void B(double x);
void A(void (*f)(double), int y);
void A(void (*f)(double), int y) {

    clock_t start = clock();
    f(2.5);
    clock_t stop = clock();
    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << elapsed << endl;
}
void B(double x)
{
    clock_t start = clock();
    int  i = 0;
    while (i <= 10000000)
        i++;
    clock_t stop = clock();

    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << elapsed << endl;

}
int main()
{
    void (*f)(double);
    void& b = f;
    A(B, 2);
    return 0;
}
