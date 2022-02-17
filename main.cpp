#include <iostream>

using namespace std;


int main (){

    string vard;
    int a, sum, lyt;
    
    cout<< "kokia jusu lytis? jeigu esate vyras, spauskite 1, jeigu moteris - spauskite 0: ";
    cin>>lyt;
    if(lyt==1 || lyt==0)
    {
        cout<< "iveskite savo varda: ";
        cin >> vard;
    }
    else
    {
        cout<< "pasirinkta neteisingai. bandykite dar karta: ";
        cin>>lyt;
        cout<< "iveskite savo varda: ";
        cin>> vard;
    }
    

    a = vard.size();
    
    sum=a+16;
    for(int i=0; i<sum; i++) cout<<"*";
    cout<<endl;
    cout<<"*";
    for(int i=0; i<sum-2; i++) cout << " ";
    cout<<"*"<<endl;
    
    if(lyt==1) cout<<"*    Sveikas,"<<vard<<"! *"<<endl;
    else cout<<"*    Sveika,"<<vard<<"!  *"<<endl;
    cout<<"*";
    for(int i=0; i<sum-2; i++) cout << " ";
    cout<<"*"<<endl;
    for(int i=0; i<sum; i++) cout<<"*";
    cout<<endl;
    
    return 0;
    
    }
