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
reverse("SHAHPER");
}


//practice 
void reverse(string S){
    if(S.length()==0){
        return;
    }
    string newS=S.substr(1);
    reverse(newS);
    cout<<S[0];
}
int main(){
    string S;
    reverse("SHAHPER");
}

// void reverse(string s){
//     if(s.length() ==0){
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// int main(){
// reverse("binod");
// return 0;
// }

// void reverse(string S){
//     if(S.length() == 0){
//         return;
//     }
//     string s = S.substr(1);
//     reverse(s);
//     cout<< S[0];

// }
// int main(){
// string S;
//  reverse("binod");
// }

// void reverse(string S){
//     if(S.length()==0){
//         return;
//     }
//     string newS = S.substr(1);
//     reverse(newS);
//     cout<<S[0];
// }
// int main(){
//     string S;
//     reverse("SHAHPER");
// }

