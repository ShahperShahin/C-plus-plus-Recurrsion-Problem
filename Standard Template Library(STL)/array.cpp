#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,5,3};
    
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<< a[i];
    }
     cout<< "\nfirst element is \n"<< a.front();
     cout<< "\nlast element is \n"<< a.back();
     cout<< "\nelement at 2rd index is \n"<< a.at(2);

}