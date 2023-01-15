#include<iostream>
using namespace std;
string checkSpeed(float spe);
int main(){
     float spe;
     string result;
     cout<<"Enter the speed :";
     cin>>spe;
     result=checkSpeed(spe);
     cout<<result;
     
}
string checkSpeed(float spe){
    string result;
    if(spe<=10){
        result="slow";
        return result;
    }
    if(spe>10 && spe<=50){
        result="average";
        return result;
    }
    if(spe>50 && spe<=150){
        result="fast";
        return result;
    }
    if(spe>150 && spe<=1000){
        result="Ultra fast";
        return result;
    }
    else{
        result="extremely fast :";
        return result;
    }

}
