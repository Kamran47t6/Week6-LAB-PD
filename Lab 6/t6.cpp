#include<iostream>
using namespace std;
float checkCost(string city,string product,float quantity);
int main(){
    float result;
    string city;
    string product;
    float quantity;
    cout<<"Enter city name :";
    cin>>city;
    cout<<"Enter product from following (coffee,water,beer,sweets,peanuts):";
    cin>>product;
    cout<<"Enter quantity :";
    cin>>quantity;
    result=checkCost(city,product,quantity);
    cout<<result;

}
float checkCost(string city,string product,float quantity){
    float cost=0;
    if(city=="sofia"){
        if(product=="coffee"){
            cost=0.50*quantity;
        }
        else if(product=="water"){
            cost=0.80*quantity;
        }
        else if(product=="beer"){
            cost=1.20*quantity;
        }
        else if(product=="sweets"){
            cost=1.45*quantity;
        }
        else{
            cost=1.60*quantity;
        }
       
    }
    
    if(city=="plovdiv"){
        if(product=="coffee"){
            cost=0.40*quantity;
        }
        else if(product=="water"){
            cost=0.70*quantity;
        }
        else if(product=="beer"){
            cost=1.15*quantity;
        }
        else if(product=="sweets"){
            cost=1.30*quantity;
        }
        else{
            cost=1.50*quantity;
        }
        
    }
    if(city=="Varna"){
        if(product=="coffee"){
            cost=0.45*quantity;
        }
        else if(product=="water"){
            cost=0.70*quantity;
        }
        else if(product=="beer"){
            cost=1.10*quantity;
        }
        else if(product=="sweets"){
            cost=1.35*quantity;
        }
        else{
            cost=1.55*quantity;
        }
        
    }
     return cost;

}