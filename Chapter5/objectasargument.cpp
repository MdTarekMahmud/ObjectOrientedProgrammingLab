#include<iostream>
using namespace std;
class time
{
    int  minute;
    int hour;
    public:
    void getdata(int y , int x){
        minute = x;
        hour = y;
    }
    void putdata()
    {
        cout << "Hour is : " << hour << endl;
        cout << "Minuter is : " << minute << endl;
    }
    void sum(time,time);

};
void time :: sum(time t1,time t2){
    minute =t2. minute + t1.minute; 
    hour = minute/60;
    minute = minute % 60;
    hour = hour + t1.hour+ t2.hour;
}
int main()
{
    time t,t2,t3;
    t.getdata(2,45);
    t2.getdata(4,49);
    t3.sum(t,t2);
    t.putdata();
    t2.putdata();
    t3.putdata();

    return 0;
}