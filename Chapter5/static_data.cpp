#include<iostream>
using namespace std;
class test
{
    static int count;
    int code;
    public:
    void setcode()
    {
       code=  count++;
    }
    void showcode()
    {
        cout << "Code " << code << endl;
    }
    static void showcount(){
    cout << "Count " << count << endl;
}

};
int test :: count;
int main()
{
    test a1,a2;
    a1.setcode();
    a2.setcode();
    test :: showcount();
    test a3;
    a3.setcode();
  test :: showcount();
  a1.showcode();
  a2.showcode();
  a3.showcode();
    return 0;
}