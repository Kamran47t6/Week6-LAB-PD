#include <iostream>
using namespace std;
float Hotel(string month, float numstay);
int main()
{
    string month;
    int numstay;
    float result;
    cout << "Enter name of month :";
    cin >> month;
    cout << "Enter numberr of stay :";
    cin >> numstay;
    result=Hotel(month,numstay);
    cout<<result;
    
}
float Hotel(string month, float numstay)
{
    float studio, apartment, payable;
    if (month == "May" || month == "October")
    {
        if (numstay <= 7)
        {
            studio = 50 * numstay;
            apartment = 65 * numstay;
            payable = studio + apartment;
            cout << "APartment :" << apartment<<endl;
            cout << "Studio :" << studio<<endl;
            cout << "Fianl Pay:" << payable<<endl;
        }
        else if (numstay > 7 && numstay <= 14)
        {
            studio = 50 * numstay;
            apartment = 65 * numstay;
studio = studio-(studio / 100) * 5;
         
            payable = studio + apartment;
            cout << "APartment :" << apartment<<endl;
            cout << "Studio :" << studio<<endl;
            cout << "Fianl Pay:" << payable<<endl;
        }
        else if (numstay > 14)
        {   
            studio = 50 * numstay;
            apartment = 65 * numstay;

            studio = studio-(studio / 100) * 30;
            apartment=apartment-(apartment/100)*10;
            payable = studio + apartment;
            cout << "APartment :" << apartment<<endl;
            cout << "Studio :" << studio<<endl;
            cout << "Fianl Pay:" << payable<<endl;
        }
    }
    else if (month == "June" || month == "September")
    {
        if (numstay <= 14)
        {
            studio = 75.20 * numstay;
            apartment = 68.70 * numstay;
            
            payable = studio + apartment;
            cout << "APartment :" << apartment<<endl;
            cout << "Studio :" << studio<<endl;
            cout << "Fianl Pay:" << payable<<endl;
        }
        else if (numstay > 14)
        {
            studio = 75.20* numstay;
            apartment = 68.70 * numstay;
           studio = studio-(studio / 100) * 20;
            apartment=apartment-(apartment/100)*10;
            payable = studio + apartment;
            cout << "APartment :" << apartment<<endl;
            cout << "Studio :" << studio<<endl;
            cout << "Fianl Pay:" << payable<<endl;
        }
       
    }
    else if(month=="July" || month=="August")
    {
        studio=76*numstay;
        apartment=77*numstay;
        if(numstay>14){
            apartment=apartment-(apartment/100)*10;
        }
        payable=studio+apartment;
        cout<<"Studio :"<<studio;
        cout<<"Apartment :"<<apartment;
        cout<<"Payable :"<<payable;
    }
}