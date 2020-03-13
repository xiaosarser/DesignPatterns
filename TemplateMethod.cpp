#include <iostream>
using namespace std;
 class buyGift
{
public:
    buyGift(){}
    void giveGift()
    {
        cout<<"give a gift"<<endl;
    }
    void package()
    {
        cout<<"package a gift"<<endl;
    }
public:
    virtual void payMoney(){}
public:
    void processOrder()
    {
        giveGift();
        payMoney();
        package();
    }
    ~buyGift(){}

};

class chineseBuyer:public buyGift
{
public:
    chineseBuyer(){}
    void payMoney()
    {
        cout<<"I pay RMB"<<endl;
    }
    ~chineseBuyer(){}
};

class AmericanBuyer:public buyGift
{
public:
    AmericanBuyer(){}
    void payMoney()
    {
        cout<<"I pay dollars"<<endl;
    }
    ~AmericanBuyer(){}
};
int main()
{
    buyGift* a=new AmericanBuyer();
    a->processOrder();
    return 0;
}