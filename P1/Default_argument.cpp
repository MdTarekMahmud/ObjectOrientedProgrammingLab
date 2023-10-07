#include<iostream>
using namespace std;
int sum(int x= 10,int y = 4,int z =6 ){
    return x+y+z;
}
int main()
{
    cout << sum() << endl;
    cout << sum(1) << endl;
    cout << sum(1,2) << endl;
    cout << sum(1,2,3) << endl;

    return 0;
}