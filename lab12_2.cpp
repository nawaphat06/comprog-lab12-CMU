#include<iostream>
using namespace std;

long gcd(long x, long y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

long gcd(long x, long y){
    if(x % y == 0) return y;
    else return gcd(y, x%y);
}