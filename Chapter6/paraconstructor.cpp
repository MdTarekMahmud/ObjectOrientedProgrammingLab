#include<iostream>
using namespace std;
class test 
{
    int a,b;
    public:
        test(int x ,int y){
            a = x;
            b = y;
        }
        void display(void){
            cout << "A =" << a << endl << "B =" << b<< endl;
        }
};
int main(){
    test t(100,200);
    t.display();
    test t2 = test(11,23);
    t2.display();

    return 0;

}