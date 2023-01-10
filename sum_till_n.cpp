#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int Sum(int n){
    int prevSum = Sum(n-1);
    return n+prevSum;
}
int main(){
    int n;
    cin>>n;
    cout << Sum(n);
}