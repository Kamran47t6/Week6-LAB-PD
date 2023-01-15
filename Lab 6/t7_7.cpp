#include <iostream>
using namespace std;
float football(float budget, string categoryk, int people);
int main()
{
    float budget, result;
    string categoryk;
    int people;
    cout << "Enter budget :";
    cin >> budget;
    cout << "Enter category :";
    cin >> categoryk;
    cout << "ENter number of people: ";
    cin >> people;
    cout << football(budget, categoryk, people);
}
float football(float budget, string categoryk, int people)
{
    float transport, remain, total;
    if (categoryk == "Normal")
    {
        if (people <= 4)
        {
            transport = (budget / 100) * 75;
            remain = budget - transport;

            if (remain >= (people * 249.99))
            {
                remain = remain - (people * 249.99);
                total = remain;
                cout << "Yes ! You have " << total << " QR left";
            }
            else
            {
                total = remain;
                cout << "Not enough money " << total << " money required more ";
            }
        }

        else if (people >= 5 && people <= 9)
        {
            transport = (budget / 100) * 60;
            remain = budget - transport;

            if (remain >= (people * 249.99))
            {
                remain = remain - (people * 249.99);
                total = remain;
                cout << "Yes ! You have " << total << " QR left";
            }
            else
            {
                total = remain;
                cout << "Not enough money " << total << " money required more ";
            }
        }
        else if (people >= 10 && people <= 24)
        {
            transport = (budget / 100) * 50;
            remain = budget - transport;

            if (remain >= (people * 249.99))
            {
                remain = remain - (people * 249.99);
                total = remain;
                cout << "Yes ! You have " << total << " QR left";
            }
            else
            {
                total = remain;
                cout << "Not enough money " << total << " money required more ";
            }
        }
        else if (people >= 25 && people <= 49)
        {
            transport = (budget / 100) * 40;
            remain = budget - transport;

            if (remain >= (people * 249.99))
            {
                remain = remain - (people * 249.99);
                total = remain;
                cout << "Yes ! You have " << total << " QR left";
            }
            else
            {
                total = remain;
                cout << "Not enough money " << total << " money required more ";
            }
        }
        else if (people >= 50)
        {
            transport = (budget / 100) * 25;
            remain = budget - transport;

            if (remain >= (people * 249.99))
            {
                remain = remain - (people * 249.99);
                total = remain;
                cout << "Yes ! You have " << total << " QR left";
            }
            else
            {
                total = remain;
                cout << "Not enough money " << total << " money required more ";
            }
        }
}
    if (categoryk == "VIP")
    {
        
            if (people <= 4)
            {
                transport = (budget / 100) * 75;
                remain = budget - transport;

                if (remain >= (people * 449.99))
                {
                    remain = remain - (people * 499.99);
                    total = remain;
                    cout << "Yes ! You have " << total << " QR left";
                }
                else
                {
                    total = remain;
                    cout << "Not enough money " << total << " money required more ";
                }
            }

            else if (people >= 5 && people <= 9)
            {
                transport = (budget / 100) * 60;
                remain = budget - transport;

                if (remain >= (people * 499.99))
                {
                    remain = remain - (people * 499.99);
                    total = remain;
                    cout << "Yes ! You have " << total << " QR left";
                }
                else
                {
                    total = remain;
                    cout << "Not enough money " << total << " money required more ";
                }
            }
            else if (people >= 10 && people <= 24)
            {
                transport = (budget / 100) * 50;
                remain = budget - transport;

                if (remain >= (people * 499.99))
                {
                    remain = remain - (people * 499.99);
                    total = remain;
                    cout << "Yes ! You have " << total << " QR left";
                }
                else
                {
                    total = remain;
                    cout << "Not enough money " << total << " money required more ";
                }
            }
            else if (people >= 25 && people <= 49)
            {
                transport = (budget / 100) * 40;
                remain = budget - transport;

                if (remain >= (people * 499.99))
                {
                    remain = remain - (people * 499.99);
                    total = remain;
                    cout << "Yes ! You have " << total << " QR left";
                }
                else
                {
                    total = (people * 499.99) - remain;
                    cout << "Not enough money " << total << " money required more ";
                }
            }
            else if (people >= 50)
            {
                transport = (budget / 100) * 25;
                remain = budget - transport;

                if (remain >= (people * 499.99))
                {
                    remain = remain - (people * 499.99);
                    total = remain;
                    cout << "Yes ! You have " << total << " QR left";
                }
                else
                {
                    total = remain;
                    cout << "Not enough money " << total << " money required more ";
                }
            }
        }
}
