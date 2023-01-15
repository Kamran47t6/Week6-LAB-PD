#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void clear(int x,int y,char previous);
void showPacMan(int x,int y);
void showGhost(int x,int y);
char getCharAtxy(short int x, short int y);
main()
{
    int pacmanX = 1; 
    int pacmanY = 1; 
    string direction = "right";
    char previousChar = ' ';
    system("cls");
    printMaze();
    showGhost(pacmanX,pacmanY);
    while(true){
        Sleep(100);
        if(direction=="right"){
            char nextLocation = getCharAtxy(pacmanX+1,pacmanY);
            if(nextLocation=='%'){
                direction="left";
            }
            else if(nextLocation== ' ' || nextLocation== '.')
            {
                clear(pacmanX,pacmanY,previousChar);
                pacmanX=pacmanX+1;
                previousChar=nextLocation;
                showGhost(pacmanX,pacmanY);
            }
        }
        if(direction=="left"){
            char nextLocation= getCharAtxy(pacmanX-1,pacmanY);
            if(nextLocation=="%"){
                direction=="right";
            }
            else if(nextLocation==' ' || nextLocation== '.'){
                clear(pacmanX,pacmanY,previousChar);
                pacmanX=pacmanY-1;
                previousChar=nextLocation;
                showGhost(pacmanX,pacmanY);
            }
        }
    }
    cout << "P";
    while (gamerunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                gotoxy(pacmanX, pacmanY);
                cout << " ";
                pacmanX = pacmanX - 1;
                gotoxy(pacmanX, pacmanY);
                cout << "P";
            }
        }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
                if (nextLocation == ' ')
                {
                    gotoxy(pacmanX, pacmanY);
                    cout << " ";
                    pacmanX = pacmanX + 1;
                    gotoxy(pacmanX, pacmanY);
                    cout << "P";
                }
            }
            if (GetAsyncKeyState(VK_UP))
            {
                char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
                if (nextLocation == ' ')
                {
                    gotoxy(pacmanX, pacmanY);
                    cout << " ";
                    pacmanX = pacmanY - 1;
                    gotoxy(pacmanX, pacmanY);
                    cout << "P";
                }
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
                if (nextLocation == ' ')
                {
                    gotoxy(pacmanX, pacmanY);
                    cout << " ";
                    pacmanX = pacmanY + 1;
                    gotoxy(pacmanX, pacmanY);
                    cout << "P";
                }
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gameRunning = false;
            }
            Sleep(200);
  }
    
}
void printMaze()
{
    cout << "%%%%%%%%%%" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%%%%%%%%%%" << endl;
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void gotoxy(int x,int y){
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void clear (int x,int y,char previous){
    gotoxy(x,y);
    cout<<previous;
}
void showGhost(int x,int y){
    gotoxy(x,y);
    cout<<"G";
}
