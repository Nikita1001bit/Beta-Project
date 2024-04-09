#ifndef Admin_h
#define Admin_h
#include <iostream>
using namespace std;

class Admin
{
    public:
    class User; //forward declaration of the user class
    class Item; //forward declaration of the item class
    void deleteitem(); //deletes the item
    void terminatetransaction(); //terminates the transaction
    void mediatedeal(); //mediates the deal, allows payment process to begin if sufficient balance exists
};

#endif