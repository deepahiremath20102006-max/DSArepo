#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of diamond: ";
    cin >> n;
   for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j < i+1; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < 2*(n - i-1); j++) {
            cout << " ";                                                                     
        }

        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        
            for(int j=0;j<i*2;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<"*";
            }
        
        cout<<endl;
    }

}