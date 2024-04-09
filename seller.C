#include <iostream> 
#include <user.h> 

class Seller : public User
{
private: 
int num_sales; 

public: 
Seller():User(){
}

Seller(string n, string i):User(i,n){
}
setItemDetails(); // seller will update details about the product they are seller 
setItemDetails(char archtype, string name, int quantity, float price); 

};
