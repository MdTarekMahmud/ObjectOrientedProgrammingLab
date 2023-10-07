#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void getroll(int i)
    {
        roll = i;
    }
    void put_roll()
    {
        cout << "Roll is : " << roll << endl;
    }
};
class test : public student
{   
    protected:
    int mark1,mark2;
    public:
    void getMark(int x ,int y){
        mark1 = x;
        mark2 = y;
    }
    void put_mark()
    {
        cout << "Marks are : " << mark1 << " " << mark2 << endl;
    }

};
class Sp{
    protected:
    int sp;
    public:
    void getsp(int x){
        sp = x;
    }
    void putsp(){
        cout << "Sport score is : " << sp << endl;
    }
};
class Result : public test,public Sp{
    int total;
    public:
    void disp();
};
void Result :: disp(){
    total = mark1+ mark2 + sp;
    put_roll();
    put_mark();
    putsp();
    cout << "Total is : " << total << endl;
}
int main()
{
    Result obj;
    obj.getroll(17);
    obj.getMark(88,99);
    obj.getsp(9);
    obj.disp();

    return 0;
}