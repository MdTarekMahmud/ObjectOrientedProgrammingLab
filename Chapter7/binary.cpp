#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test(){
        a = b = 0;
    }
    test(int x,int y){
        a = x;
        b = y;
    }
    void putdata(){
        cout << "Value of A and B : " << a << " "  << b << endl;
    }
    test operator +(test t);
};
test test :: operator + (test t){
    test temp;
    temp.a = a + t.a;
    temp.b = b + t.b;
    return temp;
}
int main()
{
    test t1,t2,t3;
    t1 = test(20,10);
    t2 = test(30,40);
    t3 = t1+t2;
    t1.putdata();
    t2.putdata();
    t3.putdata();

    return 0;
}
