#include<iostream>
using namespace std;
class test 
{
    int a,b;
    public:
        test(){
            a = b = 0;
        }
        void display(void){
            cout << "A = " << a << endl << "B = " << b;
        }
};
int main(){
    test t;
    t.display();

    return 0;

}