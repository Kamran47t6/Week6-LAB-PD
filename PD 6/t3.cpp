#include<iostream>
using namespace std;
string ZOdiac(int date,string month,string sign);
int main(){
    int date;
    string month,sign;
    cout<<"ENter date :";
    cin>>date;
    cout<<"ENter month :";
    cin>>month;
   cout<< ZOdiac(date,month,sign);

}
string ZOdiac(int date,string month,string sign){
    if(month=="December"){
       if(date>=22){
          sign="Capricorn";
       }
       else{
          sign="Sagittarius";
       }
    }
    else if(month=="January"){
       if(date>=20){
          sign="Aquarius";
       }
       else{
          sign="Capricorn";
       }
    } 
    else if(month=="February"){
       if(date>=19){
          sign="Pisces";
       }
       else{
          sign="Aquarius";
       }
    } 
    else if(month=="march"){
       if(date>=21){
          sign="Aries";
       }
       else{
          sign="Pisces";
       }
    } 
    else if(month=="April"){
       if(date>=20){
          sign="Taurus";
       }
       else{
          sign="Aries";
       }
    } 
    else if(month=="May"){
       if(date>=21){
          sign="Gemini";
       }
       else{
          sign="Taurus";
       }
    } 
    else if(month=="June"){
       if(date>=21){
          sign="Cancer";
       }
       else{
          sign="Gemini";
       }
    } 
    else if(month=="July"){
       if(date>=23){
          sign="Leo";
       }
       else{
          sign="Cancer";
       }
    } 
    else if(month=="August"){
       if(date>=23){
          sign="Vrgo";
       }
       else{
          sign="Leo";
       }
    } 
    else if(month=="September"){
       if(date>=23){
          sign="Libra";
       }
       else{
          sign="Virgo";
       }
    } 
    else if(month=="October"){
       if(date>=23){
          sign="Scorpio";
       }
       else{
          sign="Libra";
       }
    } 
    else if(month=="November"){
       if(date>=22){
          sign="Sagittarius";
       }
       else{
          sign="Scorpio";
       }
    } 
    return sign;
}

