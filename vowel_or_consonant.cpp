#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0;i<=n;++i){
        if(i%3!=0){
            cout<<i<<" ";
        }
    }
        cout<<"VOWEL OR CONSONANT"<<endl;
       char c;
       cout<<"Enter Letter: ";
       cin>>c;
       if(c=='a' || c=='i' || c=='e' || c=='u' || c=='o'){
         cout<<c<<" is a vowel ";
       }
       else{
        cout<<c<<" is a consonant "<<endl;
       }
}