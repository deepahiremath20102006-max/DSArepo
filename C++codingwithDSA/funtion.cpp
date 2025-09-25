#include<iostream>
using namespace std;
void primeChecking(int num){
    int prime=1;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            
            prime=0;

            break;
        }
        
        
    }
    if(prime==1){
  cout<<"it is a  prime no.";
    }
    else{
          cout<<"it is a not prime no.";
    }
  

}
int main(){

    int num;
    cout<<"entre the no=";
    cin>>num;
    primeChecking(num);
    
    
}