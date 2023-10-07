#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int age;
    public:
    void getData()
    {
        cin >> name >> age;
    }
    void putData()
    {
        cout << "Name :" << name << "\t";
        cout << "Age : " << age << endl;
    }

};
const int n = 3;
int main()
{
    employee manager[n];
    for(int i = 0 ;i<n;i++){
        manager[i].getData();
    }

     for(int i = 0 ;i<n;i++){

        manager[i].putData();
    }


    return 0;
}