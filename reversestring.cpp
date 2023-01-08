#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string news=s.substr(1);
    reverse(news);
    cout<< s[0];
}

int main(){
string s;
reverse("HELLOWORLD");
}
