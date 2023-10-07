#include<iostream>
using namespace std;
class test
{
    int a ,b;
    public:
    void getdata(float x,float y)
    {
        a = x;
        b = y;
    }
    void putdata()
    {
        cout << "Value of a and b is : " << a << " " << b << endl;
    }
    friend float mean(test);

};
float mean(test t){
    return float(t.a+t.b/2.0);
}
int main()
{
    test t1;
    t1.getdata(4.2,3.6);
    mean(t1);
    t1.putdata();
    return 0;
}