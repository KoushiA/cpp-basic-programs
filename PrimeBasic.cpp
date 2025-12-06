#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"***CHECK PRIME NUMBER***"<<endl;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<=1){
        cout<<n<<" not a prime number."<<endl;
    }
    bool isPrime= true;
    int p=sqrt(n);
    for(int i=2; i<=p; ++i){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
if(isPrime){
    cout<<n<<" is prime number."<<endl;
}
else{
    cout<<n<<" is not a prime number."<<endl;
}
}