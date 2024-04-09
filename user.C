#include <iostream>
#include "Item.h"
using namespace std;
class User
{
    private:
    string id;
    //char type; 
    string name;
    //float balance;
    //int num_sales;
    //int num_buys;

    public:
    User();
    void display();
    void setdata();
    friend class Item;
    bool Transactionconfirmed();
    
};

