#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no=";
    cin>>n;
    // // int num=1;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     // char ch='A';
    //     for(int j=1;j<=n;j++){
    //         cout<<ch<<" ";
    //         // cout<<num<<" ";
    //         ch++;
    //         // num++;
    //     }
    //     cout<<endl;// }

// triangle pattern=
// int n;
// cout<<"enter thr value=";
// cin>>n;
// char ch='A';
// // int num=1;
//     for(int i=0;i<n;i++){
//         // char ch='A';
//         for (int j=0;j<i+1;j++){
//             cout<<ch<<" ";
//             ch++;
//             // num++;
//         }
//         // ch++;
//         cout<<endl;
//     }


// reverse traingale
// for(int i=0;i<n;i++){
//     char ch='A'+i;
//     for(int j=0;j<i+1;j++){
//         cout<<ch<<" ";
//         ch--;
//     }
//     cout<<endl;
// }

// inverted triangle

for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int j=0;j<=n-i;j++){
        cout<<i;
    }
    cout<<endl;
}

    return 0;

}