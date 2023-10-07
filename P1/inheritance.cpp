#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    int b;
    void getval_ab(){
        cin >> a >> b;
    }
    int get_a(){return a;}
    void show_a(){
        cout << "Value of a is: " << a << endl;
    }
};
class B : public A
{
    int c;
    public:
    void mul();
    void disp();
};
void B::mul()
{;
    getval_ab();
    c = get_a()*b;
}
void B :: disp()
{
    show_a();
    cout << "Value of B is : " << b << endl;
    cout << "Total : " << c <<endl;
}
int main()
{
    B obj;
    obj.mul();
    obj.disp();

    return 0;
}