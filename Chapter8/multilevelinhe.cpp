#include <iostream>
using namespace std;
class stu
{
    protected:
        int roll;

    public:
        void getroll(int );
        void dispRoll(void);
};
void stu :: getroll(int x)
{
    roll = x;
}
void stu :: dispRoll(void){
    cout << "Roll is : " << roll << endl;
}
class test : public stu
{
    protected:
    int mark1,mark2;
    public:
    void getmarks(int ,int );
    void dispMarks(void);
};
void test ::getmarks(int x, int y)
{
    mark1 = x;
    mark2 = y;
}
void test :: dispMarks (void)
{
    cout << "Mark1 is : " << mark1 << endl;
    cout << "Mark2 is : " << mark2 << endl;
}
class result : public test
{
    int Total;
        public:
        void display(void);
};
void result :: display(void)
{
    Total = mark1 + mark2;
    dispRoll();
    dispMarks();
    cout << "Total marks is : " << Total << endl;
}
int main()
{
    result obj;
    obj.getroll(17);
    obj.getmarks(87,89);
    obj.display();
    return 0;
}