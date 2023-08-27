#include <iostream>
using namespace std;
class Nine
{
public:
	int x = 1;
	int y = 1;
	void print(int arr[][9]);

};
void Nine::print(int arr[][9])
{
    int left, right, top, button;
    left = (x - 1 < 0) ? -1 : arr[x - 1][y];
    right = (x + 1 > 9) ? -1 : arr[x + 1][y];
    top = (y - 1 < 0) ? -1 : arr[x][y - 1];
    button = (y + 1 > 9) ? -1 : arr[x][y + 1];
    int left_top = (x - 1 < 0 && y - 1 < 0) ? -1 : arr[x - 1][y - 1];
    int right_top = (x + 1 > 9 && y - 1 < 0) ? -1 : arr[x + 1][y - 1];
    int left_button = (x - 1 < 0 && y + 1 > 9) ? -1 : arr[x - 1][y + 1];
    int right_button = (x + 1 > 9 && y + 1 > 9) ? -1 : arr[x + 1][y + 1];
    cout << "×ó±ß£º" << left << endl;
    cout << "ÓÒ±ß£º" << right << endl;
    cout << "ÉÏ±ß£º" << top << endl;
    cout << "ÏÂ±ß£º" << button << endl;
    cout << "×óÉÏ±ß£º" << left_top << endl;
    cout << "ÓÒÉÏ±ß£º" << right_top << endl;
    cout << "×óÏÂ±ß£º" << left_button << endl;
    cout << "ÓÒÏÂ±ß£º" << right_button << endl;

}
int main()
{
    int arr[][9] = {
        { 3,  7, 14, 21, 28, 35, 42, 49, 56},
        {10, 19, 28, 37, 46, 55, 64, 73, 82},
        {19, 28, 37, 46, 55, 64, 73, 82, 91},
        {28, 37, 46, 55, 64, 73, 82, 91,100},
        {37, 46, 55, 64, 73, 82, 91,100,109},
        {46, 55, 64, 73, 82, 91,100,109,118},
        {55, 64, 73, 82, 91,100,109,118,127},
        {64, 73, 82, 91,100,109,118,127,136},
        {73, 82, 91,100,109,118,127,136,145}
    };
	Nine c;
	c.print(arr);
	return 0;
}

