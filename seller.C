#include <iostream> 
#include <user.h> 

class Seller : public User
{
private: 
int num_sales; 

public: 
Seller(); 
Seller(string name, string id); 
setItemDetails(); // seller will update details about the product they are seller 
setItemDetails(char archtype, string name, int quantity, float price); 

};
