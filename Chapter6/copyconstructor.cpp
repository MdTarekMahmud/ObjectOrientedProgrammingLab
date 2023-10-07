#include<iostream>
using namespace std;
class test 
{
    int code,price;
    public:
    test(int x, int y){
        code = x;
        price=y;
    }
    test (const test &t);
    void display(void);
};
void test::display(void){
            cout << "A =" << code << endl << "B =" << price << endl;
        }
test :: test (const test& t){
    code = t.code;
    price = t.price;
}
int main(){
    test t(100,200);
    t.display();
    test t3(t);
    t3.display();
    test t2 = t;
    t2.display();
    return 0;

}