#include <iostream>
using namespace std;

int PackageDiscount() {
    int packages;
    double discount;
    int purchase = 99;
    double totalPurchase;

    cout << "Enter the number of packages purchased." << endl;
    cin >> packages;

    if (packages >= 0 && packages < 10)
    {
        discount = 0;
    }
    else if (packages > 9 && packages < 20)
    {
        discount = .10;
    }
    else if (packages > 19 && packages < 50)
    {
        discount = .20;
    }
    else if (packages > 49 && packages < 100)
    {
        discount = .30;
    }
    else if (packages > 99)
    {
        discount = .40;
    }
    else
    {
        cout << "Error" << endl;
    }

    totalPurchase = purchase - (discount * purchase);

    cout << discount << endl;
    cout << totalPurchase;

    return 0;
}