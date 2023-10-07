#include<iostream>
using namespace std;
int main()
{
    float a,b,sum,ave;
    cout << "Enter two Number : ";
    cin >> a >> b;
    sum = a+b;
    ave = sum/2;

    cout << "Sum = " << sum << "\n";
    cout << "Average = " << ave << "\n";

    return 0;
}