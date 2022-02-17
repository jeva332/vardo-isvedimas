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
    
    cout<<"kokio dydzio remelio norite? maziausias galimas dydis yra"<<a+11;
    cin>>sum;
    if(sum>=a+3)
    {
        for(int i=0; i<sum; i++) cout<<"*"; cout<<endl;
        
        cout<<"*";
        for(int i=0; i<sum-2; i++) cout << " ";
        cout<<"*"<<endl;
        
        if(lyt==1)
        {
            cout<<"*";
            for(int i=0;i<(sum-2-9-a)/2; i++) cout<<" ";
            cout<<"Sveikas, "<<vard<<"!";
            for(int i=0;i<(sum-2-9-a)/2-1; i++) cout<<" ";
            cout<<"*"<<endl;
        }
        if(lyt==0)
        {
            cout<<"*";
            for(int i=0;i<(sum-2-8-a)/2; i++) cout<<" ";
            cout<<"Sveika, "<<vard<<"!";
            for(int i=0;i<(sum-2-8-a)/2-1; i++) cout<<" ";
            cout<<"*"<<endl;
        }
            
        cout<<"*";
        for(int i=0; i<sum-2; i++) cout << " ";
        cout<<"*"<<endl;
        for(int i=0; i<sum; i++) cout<<"*";
        cout<<endl;
    }
    
    
    return 0;
    
    }

