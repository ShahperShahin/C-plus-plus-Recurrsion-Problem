#include<iostream>
using namespace std;

// decreasing order from n to 0
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

int main(){
    int n;
    cin>>n;
    dec(n);
}

void inc(int n){

}

int main(){
    int n;
    cin>>n;
    inc(n);
}
// increasing order from 0 to n

void dec(int n){
    if(n==0){
        return;
    }
   
    dec(n-1);
     cout<<n<<endl;
}

int main(){
    int n;
    cout<<"enter the num" ;
    cin>>n;
    dec(n);
} 

