#include<iostream>
using namespace std;
void swap(int x , int y);
int main()
{
    int a = 100;
    int b = 200;
    cout << "Before swaping, A = " << a << "  B = " << b << endl;
    swap(a,b);
    cout << "After swaping, A = " << a << "  B = " << b << endl;

    return 0;
}
void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}