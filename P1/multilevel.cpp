#include<iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void get_roll(int x){
        roll = x;
    }
    void disp_roll()
    {
        cout << "Roll is : " << roll << endl;
    }
};
class test : public student
{
    protected:
    int m1,m2;
    public:
    void get_marks(int x,int y)
    {
        m1 = x;
        m2 = y;
    }
    void disp_mark(){
        cout << "Mark1 is : " << m1 << endl;
        cout << "Mark2 is : " << m2 << endl;
    }
};
class result : public test
{
    int total;
    public:
    void disp()
    {
        total = m1 + m2;
        disp_roll();
        disp_mark();
        cout << "Total is : " << total << endl;
    }
};
int main()
{
    result obj;
    obj.get_roll(1);
    obj.get_marks(90,99);
    obj.disp();

    return 0;
}