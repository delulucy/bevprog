#include "../std_lib_facilities.h"

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


/*
void swap_cr(const int& a, const int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
nem fut le mert a konstans referenciát nem módosíthatjuk
*/

int main()
{
	int x = 7;
    int y = 9;
    swap_r(x, y);
    swap_v(7,9);
    const int cx = 7;
    const int cy = 9;
    swap_v(cx,cy); //futtatható, de nem működik mert egy konstanst nem lehet felüldefiniálni

    cout << "x: " << x << '\n'
         << "y: " << y << '\n'
         << "cx: " << cx << '\n'
         << "cy: " << cy << '\n'

    return 0;
}