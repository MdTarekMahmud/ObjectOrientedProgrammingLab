#include<iostream>
using namespace std;
static int count = 0;
class alpha
{
    public:
    alpha()
    {
        count++;
        cout << count << " no. object creaed " << endl;
    }
    ~alpha(){
        cout << count << " no. object Destroyed " << endl;
        count --;
    }
};
int main()
{
    alpha a,b;
    {
        cout << "IN" << endl;
        alpha c,d;
    }
    cout << "Re";

    return 0;
}