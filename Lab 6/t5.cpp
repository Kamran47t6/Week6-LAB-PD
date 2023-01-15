#include <iostream>
using namespace std;
float lowestPrice(int distance, string time);
int main()
{
    int distance;
    string time;
    float result;
    cout << "ENTER Distance :";
    cin >> distance;
    cout << "Enter time (day/night) :";
    cin >> time;
    result=lowestPrice(distance,time);
    cout<<result;
}
float lowestPrice(int distance, string time)
{
    string source;
    cout << "Enter source :";
    cin >> source;
    float price;
    if (source == "Taxi")
    {
        if (time == "Day")
        {
            price = 0.79 * distance+0.70;
        }
        if (time == "Night")
        {
            price = 0.90 * distance;
        }
        return price;
    }
    if (source == "Bus")
    {
        if (distance >= 20)
        {
            if (time == "Day" || time == "Night")
            {
                price = 0.09 * distance;
            }
        }
        else{
            cout<<"Use another source for short distance";
        }
        return price;
    }
     if (source == "Train")
    {
        if (distance >= 100)
        {
            if (time == "Day" || time == "Night")
            {
                price = 0.06 * distance;
            }
        }
        else{
           cout<<"Use another source for short distance";
        }
        return price;
    }

}
