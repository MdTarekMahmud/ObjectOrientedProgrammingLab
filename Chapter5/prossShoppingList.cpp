#include<iostream>
using namespace std;
class ITEM
{   
    int itemCode[50];
    float itemPrice[50];
    int count;
    public:
        void CNT(){
            count = 0;
        }
        void getItem(void);
        void displayTotal(void);
        void removeItem(void);
        void displayItem(void);
};
void ITEM :: getItem(){
    cout << "Enter Item code and Price : ";
    cin >> itemCode[count] >> itemPrice[count];
    count++;
}
void ITEM :: displayTotal(){
    float total=0;
    for(int i= 0 ;i<count;i++){
        total= total + itemPrice[i];
    }
    cout << "Total price is : " << total << endl;
}
void ITEM :: removeItem(){
    int n;
    cout << "Enter code : ";
    cin >> n;
    for(int i=0;i<count ;i++){
        if(itemCode[i]==n)
            itemPrice[i]=0;
    }
}
void ITEM :: displayItem(){
    cout << "Code\tPrice" << endl;
    for(int i=0;i<count;i++){
        cout << itemCode[i] << "\t" << itemPrice[i] << endl;
    }
}
int main()
{
    ITEM obj;
    obj.CNT();
    int a;
    do
    {
        cout << "Chose an option : " << endl;
        cout << "1. Add. " << endl;
        cout << "2. Display Total Price. " << endl;
        cout << "3. Remove ." << endl;
        cout << "4. Display all." << endl;
        cout << "5. EXIT>>>>>" << endl;
        cout << "Enter : " ;
        cin >> a;
        switch (a)
        {
        case 1: obj.getItem();
            break;
        case 2: obj.displayTotal();
            break;
        case 3: obj.removeItem();
            break;
        case 4: obj.displayItem();
            break;
        case 5: return 0;
        default:
            cout << "INVALID CHOOSE !" << endl;
        }
    } while (a!=5);
    return 0;
}