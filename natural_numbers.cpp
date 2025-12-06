//Sum of first 10 natural numbers
#include <iostream>
using namespace std;

int main(){
    int i=1;
    int sum=0;
    int sum1=0;
    while(i<=10){
        sum= i+sum ;
        ++i;
    }
    cout<<sum<<endl;
    for(i=1;i<=10;++i){
        sum1=i+sum1;
    }
    cout<<sum1;
    
}