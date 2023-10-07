#include<iostream>
using namespace std;
int calc(int);
int calc(int,int);
int main()
{
    int s,a,b;
    cout << "Enter a number : ";
    cin >> s;
    calc(s);

    cout << "Enter two number : ";
    cin >> a >> b;
    calc(a,b);
    return 0;
}
int calc(  int x)
{
    cout << "Sqare is : " << x*x << endl;
}
int calc(int x,int y)
{
    cout << "Sum is  : " << x+y << endl;
}