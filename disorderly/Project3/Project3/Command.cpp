#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int a1, a2, a3;
    char c;
    if (argc != 4)
    {
        cout << "参数数量不对。\n";
        exit(0);
    }
    a1 = atoi(argv[1]);
    a2 = atoi(argv[3]);
    c = argv[2][0];
    switch (c) {
    case '+':
        a3 = a1 + a2;
        break;
    case '-':
        a3 = a1 - a2;
        break;
    case '*':
        a3 = a1 * a2;
        break;
    case '/':
        a3 = a1 / a2;
        break;
    default:
        exit(0);
    }
    cout << a1 << "\t" << a3 << endl;
    getchar();
    return 0;
}
