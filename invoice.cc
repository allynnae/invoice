/**
 *   @file: invoice.cc
 * @author: Allison McKee
 *   @date: 01-31-2023
 *  @brief: Samsung and ViewSonic TVs
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

///Constants and function prototypes

int main(int argc, char const *argv[]) {
    // declare variables
    char monitor;
    char response;
    double quantity, price, total_price, subtotal, discount, taxes, total;
    
    // beginning
    cout << "Enter a monitor type (s, v) followed by the quantity: ";
    cin >> monitor >> quantity;

    cout << "Do you live in Ohio (yes/no)? ";
    cin >> response;
    
    cout << "Monitors invoice" << endl;
    cout << "------------------------------" << endl;
    
    // brand of monitor
    cout << "  Monitor brand: ";
    if (monitor == 's')
    {
        cout << "Samsung" << endl;
    }
    else if (monitor == 'v')
    {
        cout << "ViewSonic" << endl;
    }
    
    // quantity
    cout << "       Quantity: " << quantity << endl;
    cout << fixed << setprecision(2);
    
    // price
    if (monitor == 's')
    {
        price = 190;
    }
    else if (monitor == 'v')
    {
        price = 170;
    }
    cout << "          Price: $" << price << endl;
    
    // ohio resident
    cout << "  Ohio Resident: ";
    if (response == 'y')
    {
        cout << "Yes" << endl;
    }
    else if (response == 'n')
    {
        cout << "No" << endl;
    }
   
    // total price
    total_price = price * quantity;
    cout << "    Total price: $" << total_price << endl;
    cout << "------------------------------" << endl;
    
    // discount
    if (quantity > 3)
    {
        discount = total_price * .05;
        subtotal = total_price - discount;
    }
    else
    {
        discount = 0;
        subtotal = total_price;
    }
    cout << "       Discount: $" << discount << endl;
   
    // subtotal
    cout << "       Subtotal: $" << subtotal << endl;

    // taxes
    if (response == 'y')
    {
        taxes = subtotal * .07;
        total = subtotal + taxes;
    }
    else if (response == 'n')
    {
        taxes = 0;
        total = subtotal;
    }
    cout << "          Taxes: $" << taxes << endl;

    cout << "==============================" << endl;
    
    // total
    cout << "          Total: $" << total << endl;
   
    cout << "==============================" << endl;

    return 0;
}
