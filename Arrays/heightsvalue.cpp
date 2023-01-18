#include <iostream>
#include<math.h>
using namespace std;





int main(){

int n;
cout<<"ENTER the NUMBER"<<endl;
cin>>n;
int sum=0;
int original=n;
while(n>0){
  
    int lastdigit = n%10;
    sum= sum + pow(lastdigit,3);
    n=n/10;
} if(sum == original){
        cout<<"its great";
    }
    else{
        cout<<"learn more";
    }

}