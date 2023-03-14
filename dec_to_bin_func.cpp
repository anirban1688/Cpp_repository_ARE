#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int numeric_dec_bin_conv(int);
//void string_dec_bin_conv(int);




// The main method
int main() {
  int dec_num,sum;
   cout<<" **********This code converts a decimal number to its binary equivalent using two techniques********"; 
   cout<<"\n \n";  
   cout<<" Enter decimal number between 0 to 15:";
   cin >> dec_num;  
   sum=numeric_dec_bin_conv(dec_num);    
   cout<<"\n"<<"Converted value: "<<sum<<"\n";
  return 0;
}

// Function definition
int numeric_dec_bin_conv(int n) {
  cout << "In function numeric_dec_bin_conv: ";
  int rem,mult,sum=0,count=0;
    while (n>0)
   {     
     rem=n%2;    
     n=n/2;      
     mult=rem*pow(10,count); 
     sum=sum+mult; 
     count=count+1;     
   }
  return sum;
}



 /*void string_dec_bin_conv(int n)
 {
    int dec_num,quo,rem;
    string strconc, str_rev;
    while (n>0)
   {     
     rem=n%2; 
     string str = to_string(rem); 
     strconc=strconc+str; 
     n=n/2;         
   }   
   cout<<"\n";
   cout<<"Result using string concatenation: ";
   for(int i=strconc.length();i>=0;i--)
    cout<<strconc[i];
   cout<<"\n \n";
 }*/

 
