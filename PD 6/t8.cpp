#include <iostream>
using namespace std;
string checkFigure(int height, int x_coordinate, int y_coordinte);
main()
{
    int height, x_coordinate, y_coordinte;
    string output;

    cout << "Enter an integer h: ";
    cin >> height;
    cout << "Enter the x-coordinate: ";
    cin >> x_coordinate;
    cout << "Enter the y=coordinate: ";
    cin >> y_coordinte;

    output = checkFigure(height, x_coordinate, y_coordinte);

    cout << output << endl;
}

string checkFigure(int height, int x_coordinate, int y_coordinate)
{ 
string output;
    if (x_coordinate > (3 * height) || y_coordinate > (4 * height) || y_coordinate > height && x_coordinate < height || y_coordinate > height && x_coordinate > (2 * height))
    {
        output = "outside";
    }
    else if ((x_coordinate <= (3 * height) && y_coordinate == 0) || (x_coordinate == 0 && y_coordinate <= height) || (x_coordinate <= height && y_coordinate == height) || (x_coordinate == height && y_coordinate >= height) || ((x_coordinate >= height && x_coordinate <= (2 * height)) && y_coordinate == (4 * height)) || (x_coordinate == (2 * height) && y_coordinate >= height) || ((x_coordinate >= (2 * height) && x_coordinate <= (3 * height)) && y_coordinate == height) || x_coordinate == (3 * height))
    {
        output = "border";
    }
    else
    {
        output = "inside";
    }
    return output;
}