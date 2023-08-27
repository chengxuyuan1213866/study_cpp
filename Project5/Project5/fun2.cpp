//#include <iostream>
//using namespace std;
//inline void B(int x, int y);
//
//void A(int x, int y) {
//
//    clock_t start = clock();
//    int n = 10000;
//    int i = 0;
//    while (i < 100 * n)
//        i++;
//    clock_t stop = clock();
//    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
//    cout << elapsed << endl;
//
//
//}
//void B(int x, int y)
//{
//    clock_t start = clock();
//    int n = 10000;
//    int i = 0;
//    while (i < 100 * n)
//        i++;
//    clock_t stop = clock();
//    double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
//    cout << elapsed << endl;
//
//}
//int main()
//{
//    A(2, 3);
//    B(2, 3);
//    return 0;
//}