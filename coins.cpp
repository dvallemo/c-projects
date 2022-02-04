#include <iostream>

using namespace std;


int main()
{
    int dollars, cents;
    cout << "Please enter the amount of money to convert: " << endl;
    cout << "# of dollars: ";
    cin >> dollars;
    cout << "#of cents ";
    cin >> cents;

    int quarters, dimes, nickels, pennies;

    quarters = cents/25 + dollars*4;  //since inputs are two different units, convert all to quarters and add them
    dimes = (cents%25 + dollars*100%25)/10; //convert dollars to cents by multipling by 100 and getting what is left after dividing cents by 25

    nickels = (cents%25%10 + dollars*100%25%10)/5; // getting what is left from dimes and quarters into nickels
    pennies = (cents%5)/100 + (dollars%5);
    cout << "The coins are " << quarters << " quarters, " << dimes << " dimes, "<< nickels << " nickles, and " <<pennies<< " pennies ";

    
}
