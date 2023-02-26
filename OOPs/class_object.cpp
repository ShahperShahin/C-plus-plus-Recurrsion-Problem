#include <iostream>
using namespace std;

class student{ 
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

 };
int main(){
    student arr[2];
    for(int i=0; i<2; i++){
        cout<< "Name =";
        cin>>arr[i].name;
        cout<< "Age =";
        cin>>arr[i].age;
        cout<< "Gender =";
        cin>>arr[i].gender;
    }

    for(int i=0;i<2; i++){
        arr[i].printInfo();
    }
}

//practice below


// class student{ 
//     public:
//     string name;
//     int age;
//     bool gender;

//     void setName(string s){
//         name = s;
//     }
//     void printInfo(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//         cout<<gender<<endl;
//     }
    
//  };
// int main(){
//     student arr[2];
//     for(int i=0; i<2; i++){
//         string s;
//         cout<< "Name =";
//         cin>>s;
//         arr[i].setName(s);
//         cout<< "Age =";
//         cin>>arr[i].age;
//         cout<< "Gender =";
//         cin>>arr[i].gender;
//     }

//     for(int i=0;i<2; i++){
//         arr[i].printInfo();
//     }
// }


// class student{
//     public:
//     string name;
//     int age;
//     string gender;

//     void print(){
//         cout<<"your name is"<<name<<endl;
//         cout<<"your age is"<<age<<endl;
//         cout<<"your gender is"<<gender<<endl;
//     }   
// };
// int main(){
//     string name;
//     int age;
//     bool gender;
    
//     student arr[2];
//     for(int i=0; i<2;i++){
//         string name;
//         int age;
//         bool gender;

//         cin>> arr[i].name;
//         cin>>arr[i].age;
//         cin>>arr[i].gender;
//     }

//     for(int i=0; i<2;i++){
//         arr[i].print();
//     }
// }