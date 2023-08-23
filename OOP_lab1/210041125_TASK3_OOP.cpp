#include<iostream>
#include<string.h>
using namespace std;

class Medicine
{
private:
    char Name[50], Generic_name[50];
    double discountPercent;
    double unitPrice;
public:
    void assignName(char name[], char genericName[])
    {
        strcat(Name, name);
        strcat(Generic_name, genericName);
    }
    void assignPrice(double price)
    {
        if(price < 0.0) unitPrice = 0.0;
        else unitPrice = price;
    }
    void setDiscountPercent(double percent)
    {
        if(percent < 0 || percent > 45) discountPercent = 5.0;
        else discountPercent = percent;
    }
    double getSellingPrice(int nos)
    {
        return (nos*unitPrice - (nos*unitPrice*(discountPercent/100)));
    }
    void display()
    {
        cout << Name << " (" << Generic_name << ") has a unit price BDT " << unitPrice << ". Current Discount " << discountPercent << "%.";
    }
};

int main()
{
    Medicine m1;
    char name[50],gen_name[50];
    double up, dp;
    int no;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter generic name: ";
    cin >> gen_name;
    cout << "Enter unit price: ";
    cin >> up;
    cout << "Enter discount price: ";
    cin >> dp;

    m1.assignName(name, gen_name);
    m1.assignPrice(up);
    m1.setDiscountPercent(dp);

    cout << "How many medicines you wanna buy? " ;
    cin >> no;
    cout << "Selling Price: " << m1.getSellingPrice(no) << endl;
    m1.display();
}
