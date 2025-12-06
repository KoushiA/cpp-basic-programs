//multiplication of given number
#include <iostream>
using namespace std;

int main(){
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter number till you want multiplication table ";
    cin>>p;
    for(int i=0;i<=p;++i){
        int mul= n*i;
        cout<<n<<" x "<<i<<" = "<<mul<<endl;
    }
return 0;
}