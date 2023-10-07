#include<iostream>
using namespace std;
void swap(int &x , int &y);
int main()
{
    int a = 100;
    int b = 200;
    cout << "Before swaping, A and B = " << a << " " << b << endl;
    swap(a,b);
    cout << "After swaping, A and B = " << a << " " << b << endl;

    return 0;
}
void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}