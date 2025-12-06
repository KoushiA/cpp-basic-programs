#include <iostream>
#include<cmath>
using namespace std;
//prime number between 1 to 100
int main(){
    int i,p;
    for(i = 2; i<=100; ++i){
        bool isprime=true;
     p=sqrt(i);
    for(int j=2; j<=p; ++j){
        if(i%j==0){
            isprime=false;
            break;
        }
    }

      if(isprime){
        cout<<i<<" ";
    }
}
}