#include <iostream>

using namespace std;


int main (){

    string vard;
    int a, sum;
    

    cout << "iveskite savo varda: ";
    cin >> vard;

    a = vard.size();
    sum=a+8+8;
    
    for(int i=0; i<sum; i++) cout<<"*";
    cout<<endl;
    cout<<"*";
    for(int i=0; i<sum-2; i++) cout << " ";
    cout<<"*"<<endl;
    cout<<"*    Sveikas,"<<vard<<"! *"<<endl;
    cout<<"*";
    for(int i=0; i<sum-2; i++) cout << " ";
    cout<<"*"<<endl;
    for(int i=0; i<sum; i++) cout<<"*";
    cout<<endl;
    
    return 0;
    
}
