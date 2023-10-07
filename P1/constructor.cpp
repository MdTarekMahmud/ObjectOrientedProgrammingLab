#include<iostream>
using namespace std;
class test
{   
    int a,b;
    public:
    // test ()
    // {
    //     a = 0;
    //     b = 0;
    // }
    test (int x, int y)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout << "Value of A and B : " << a << " "  << b << endl;
    }
    test (const test& t);

};
test :: test(const test& t){
    a = t.a;
    b = t.b;
}
int main()
{
    test obj(2,3);
    obj.disp();
    test obb(obj);
    obb.disp();

    return 0;
}