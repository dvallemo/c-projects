#include <iostream>
using namespace std;

//Amazon

//item: images(s), price, availability, seller,reviews
//cart: items, price, quantities 
//account: name, CC, addr, phone, email

//template for data. Factory.
class item{
public: // after this, everything is public
//Attributes: physical look and geel fo this abstract data
float price;
float ratings;

//Constructor: First time this item is created, what is the default attricbute?
//should be same variables as in the attributes
item(){
    price = 10.00;
    ratings = 0.0; //initialized, but these can change later
}
//functions: what functions does this avstract type perform?
void addToCart(){
    cout << "Added to cart!" << endl;
}
//this is a very simple class

void updatePrice(float newPrice)
{
    price = newPrice;
}
void updateRatings(float newRating)
{
    ratings = newRating;
}
};


int main ()
{
    //type  name
    int x;
    item item1, item2; // can create sub versions of the constructors

    //pointers
    int *ptr;
    item *item_ptr;

    //pointer meeet data
    ptr = &x; //pointer grabs the adree of x, can act as if it is x
    item_ptr = &item1;

    //=================================
    // APP SPACE
    //=================================

    //dot operator
    cout << "Price of item1: " << item1.price << endl;
    cout << "Ratings of item1: " << item1.ratings << endl;

    item1.addToCart(); // adds item 1 to cart, cart is a function that says item is added

    item1.updatePrice(12.50);
    item1.updateRatings(5.00);

    cout << "New price of item1: " << item1.price << endl;
    cout << "New rating of item1: " << item1.ratings << endl;

    //======================================
    //HEAP
    //======================================

    //1. have a pointer
    //2. use the pointer to get yourself a " chunck" from the heap
    //3. make sure you dont lose the address form here on!

    item *iptr;
    iptr = new item;

    cout << "just created something in the heap!" << endl;
    cout << "Price: " << iptr->price << ", ratings: " << iptr->ratings << endl;
    iptr->price =14.0;
    iptr->ratings =4.9;

    cout << "New Price: " << iptr->price << ", ratings: " << iptr->ratings << endl;

}
