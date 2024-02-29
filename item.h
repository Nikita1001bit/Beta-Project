#include <iostream>
using namespace std;
class Item
{
    private:
    int itemId;
    char archetype;
    string name;
    int quantity;
    float price;

    public:
    Item(int i, char a, string n, int q, float p);
    ~Item();
    void selectType();
    void display();
};