#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main() {
   int dec_num,quo,rem,mult,sum=0,count=0;

   cout<<" **********This code converts a decimal number to its binary equivalent using two techniques********"; 
   cout<<"\n \n";  
   cout<<" Enter decimal number between 0 to 15:";
   cin >> dec_num;
   string strconc, str_rev;
   while (dec_num>0)
   {     
     rem=dec_num%2; /* compute the remainder */
     string str = to_string(rem); /*method a: convert each remainder to a string element*/
     strconc=strconc+str; /* keep concatenating the strings */
     dec_num=dec_num/2;   /* keep updating the number by dividing it by 2*/  
     mult=rem*pow(10,count); /*method b: multiply the each remainder by incremental powers of 10 */
     sum=sum+mult; /* keeo summing up the resulting number*/
     count=count+1;     
   }
   cout<<"\n";
   cout<<"Result using string concatenation: ";
   for(int i=strconc.length();i>=0;i--)
    cout<<strconc[i];
   cout<<"\n \n";
   cout<<"Result using numeric computation: "<<sum<<"\n \n";
   cout<<"*******end of code********"<<"\n";
   return 0;
}