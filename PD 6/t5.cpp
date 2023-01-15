#include <iostream>
using namespace std;
float Daily(string fruit, string day, float quantity);
int main()
{
    string fruit, day;
    float quantity;
    float result;
    cout << "ENter name of fruit:";
    cin >> fruit;
    cout << "Enter day :";
    cin >> day;
    cout << "Enter quantity :";
    cin >> quantity;
    result = Daily(fruit, day, quantity);
    cout << result;
}
float Daily(string fruit, string day, float quantity)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thrusday" || day == "Friday")
    {
        if (fruit == "banana")
            price = 2.50 * quantity;
        else if (fruit == "apple")
            price = 1.20 * quantity;
        else if (fruit == "orange")
            price = 0.90 * quantity;
        else if (fruit == "grapesuit")
            price = 1.45 * quantity;
        else if (fruit == "kiwi")
            price = 2.70 * quantity;
        else if (fruit == "pineapple")
            price = 5.50 * quantity;
        else if (fruit == "grapes")
            price = 3.85 * quantity;
        else
            cout << "Invalid fruit name!!!";
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
            price = 2.70 * quantity;
        else if (fruit == "apple")
            price = 1.25 * quantity;
        else if (fruit == "orange")
            price = 0.90 * quantity;
        else if (fruit == "grapesuit")
            price = 1.60 * quantity;
        else if (fruit == "kiwi")
            price = 3.00 * quantity;
        else if (fruit == "pineapple")
            price = 5.60 * quantity;
        else if (fruit == "grapes")
            price = 4.20 * quantity;
        else
            cout << "Invalid fruit name!!!";
    }
    return price;
}