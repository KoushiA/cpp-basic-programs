#include <iostream>
using namespace std;

//reverse the string of nummber
int main(){
     int num,rev=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        int digit = num%10;
        rev= rev*10 + digit;
        num= num/10;
    }
    cout<<"Reversed string is: "<<rev<<endl;
return 0;
    }
