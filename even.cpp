//print even numbers
#include <iostream>
using namespace std;

int main(){
   for(int i{}; i<=50;i+=2){
      cout<<i<<" ";
   }
   cout<<endl;
   cout<<"******************************"<<endl;
   for(int i=0; i<=50;++i){
      if(i%2==0){
         cout<<i<<" ";
      }
   }
   return 0;
}