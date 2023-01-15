#include <iostream>
using namespace std;
void Result(int marks, string name);
int main()
{
    string name;
    int marks;
    cout << "Enter your name :";
    cin >> name;

    cout << resultj(marks, name);
}
void resultj(int marks, string name)
{
    int i = 1, sum;
    float percentage;
    cout << "ENter the subject marks :";
    while (i <= 5)
    {
        cin >> marks;
        sum = sum + marks;
    }

    percentage = (sum / 500) * 100;
    cout << "Total MArks :" << sum;
    cout << "Percentage Marks :" << percentage;
    if (percentage > 90 && percentage <= 100)
    {
        cout << "A+";
    }
    if (percentage > 80 && percentage <= 90)
    {
        cout << "A";
    }
    if (percentage > 70 && percentage <= 80)
    {
        cout << "B+";
    }
    if (percentage > 60 && percentage <= 70)
    {
        cout << "B";
    }
    if (percentage > 50 && percentage <= 60)
    {
        cout << "C";
    }
    if (percentage >= 40 && percentage <= 50)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
}