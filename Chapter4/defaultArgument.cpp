#include<iostream>
using namespace std;
int add(int x = 10, int y = 20, int z =30)
{
    cout << "Total is : " << x+y+z << endl;
}
int main()
{
    add();
    add(100);
    add(50,50);
    add(100,100,100);

    return 0;
}