#include <iostream>
#include <string>
using namespace std;

int main()
{
    // local structure
    struct {
        string name;
        float price;
        int qty;
    } product1, product2;

    //initialize product1
    product1.name = "Milo";
    product1.price = 33.99;
    product1.qty = 50;

    //output product1
    cout << product1.name << endl
         << product1.price << endl
         << product1.qty << endl;

    //initialize product2
    product2.name = "Horlic";
    product2.price = 23.99;
    product2.qty = 25;

    //output product2
    cout << product2.name << endl
         << product2.price << endl
         << product2.qty << endl;


    return 0;
}
