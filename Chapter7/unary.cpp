#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public:
    void getdata(int x,int y ,int z){
        a = x;
        b = y;
        c = z;
    }
    void disp(){
        cout << "A,B and C = " << a << " "  << b << " " << c << endl;
    }
    void operator - ();
};
void test :: operator-(){
    a = -a;
    b = -b;
    c = -c;
}
int main()
{
    test obj;
    obj.getdata(10,20,30);
    obj.disp();
    -obj;
    obj.disp();
    return 0;
}