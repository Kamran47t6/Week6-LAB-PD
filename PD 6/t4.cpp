#include <iostream>
using namespace std;
float Telephone(char code, int min, char time);
int main()
{
    char code;
    int min;
    char time;
    float result;
    cout << "Enter Code Premium or Regular :";
    cin >> code;
    cout << "Enter minutes you used :";
    cin >> min;
    cout << "Enter time (day/night):";
    cin >> time;
    result=Telephone(code,min,time);
    cout<<result<<"$";
}
float Telephone(char code, int min, char time)
{
    float charges=0;
    if (code == 'r' || code == 'R')
    {
        if (time == 'd' || time == 'D' || time == 'n' || time == 'N')
        {
            if (min <= 50)
                charges = 10+0;
            else
                charges = min * 0.10+10;
        }
    }
    else if (code == 'P' || code == 'p')
    {
        if (time == 'd' || time == 'D')
        {
            if (min <= 75)
                charges = 0+25;
            else
                charges = min * 0.10+25;
        }
        else if (time == 'n' || time == 'N')
        {
            if (min <= 100)
                charges = 0+25;
            else
                charges = min * 0.05+25;
        }
    }
    return charges;
}