#include <iostream>
using namespace std;

int main(){
    int n,a,b,next;
    cout<<"Enter number of terms: ";
    cin>>n;
     a=0;
     b=1;
     cout<<a<<" ";
    for(int i=1; i<n; ++i){
        next = a + b;
        cout<< next <<" ";
        a = b;
        b = next;
    }
}