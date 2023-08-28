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
    cout << "��ߣ�" << left << endl;
    cout << "�ұߣ�" << right << endl;
    cout << "�ϱߣ�" << top << endl;
    cout << "�±ߣ�" << button << endl;
    cout << "���ϱߣ�" << left_top << endl;
    cout << "���ϱߣ�" << right_top << endl;
    cout << "���±ߣ�" << left_button << endl;
    cout << "���±ߣ�" << right_button << endl;

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

