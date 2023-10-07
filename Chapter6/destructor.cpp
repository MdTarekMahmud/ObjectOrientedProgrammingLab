#include <iostream>
using namespace std;
static int count = 0;
class alpha
{
public:
    alpha()
    {
        count++;
        cout << "\nNo.of object created " << count;
    }
    ~alpha()
    {
        cout << "\nNo.of Object distroyed " << count;
        count--;
    }
};
int main()
{
    cout << "\n\nEnter main\n";
    alpha A1, A2;
    {
        cout << "\nEnner Block\n";
        alpha A3;
        alpha A4;
    }
    cout << "\nReEnter main\n";

    return 0;
}