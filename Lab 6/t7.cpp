#include<iostream>
using namespace std;
float totalincome(string screen,int row,int column);
int main(){
     string screen;
     int row,column;
     float total;
     cout<<"Enter type of screen :";
     cin>>screen;
     cout<<"Enter number of rows :";
     cin>>row;
     cout<<"Enter number of columns :";
     cin>>column;
     total=totalincome(screen,row,column);
     cout<<total;


}
float totalincome(string screen,int row,int column){
    int result;
    int seats;
    seats=(row*column);
    if(screen=="Premiere"){
        result=seats*12;
        return result;
    }
    if(screen=="Normal"){
        result=seats*7.5;
        return result;
    }
    if(screen=="Discount"){
        result=seats*5;
        return result;
    }
   
}
