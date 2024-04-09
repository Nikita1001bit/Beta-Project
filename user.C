#include <iostream>
#include "Item.h"
#include "Admin.h"
using namespace std;
class User
{
    private:
    string id; //user id
    //char type; //type of user, seller or buyer
    string name; //name of user
    //float balance; //balance of user
    int num_sales; //number of sales made by user
    int num_buys; //number of buys made by user

    public:
    User(); //constructor for user
    User(const string& i, const string& n); //constructor for user
    void display(); //displays the user details
    void setData(); //sets the data for the user
    friend class Admin; //declared class admin as friend so that it has access to user
    bool Transactionconfirmed(); //confirms the transaction
    
};

User::User()
{
    id = "User ID";
    name = "Fname/Lname";
    num_sales = 0;
    num_buys = 0;

}

User::User(const string& i, const string& n)
{
    id = i;
    name = n;
    num_sales = 0;
    num_buys = 0;
}

void User::display(){
    cout<<"The user name is: "<<name<<endl;
    cout<<"The user id is: "<<id<<endl;
    cout<<"The number of sales is: "<<num_sales<<endl;
    cout<<"The number of buys is: "<<num_buys<<endl;
}

void User::setData(){
    cout<<"Enter user name: ";
    cin>>name;
    cout<<endl;
    cout<<"Enter user id: ";
    cin>>id;
}




