// ----RAIYAAN----
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair

void menu(){
    cout<<"Choose the number for following operations"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Power"<<endl;
    cout<<"6. Modulus"<<endl;
    cout<<"7. exit"<<endl;
    cout<<"Enter your choice"<<endl;
}

int add(int x, int y){
    return x + y ;
}
int sub(int x, int y){
    return x - y ;
}
int mul(int x, int y){
    return x * y ;
}
int divi(int x, int y){
    return x / y ;
}
int power(int x, int y){
    return pow(x,y) ;
}
int mod(int x, int y){
    return x % y ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x , a, b;
    do {
        menu();
        cin>>x; 
        if(x == 7) break ;
        cout<<"Enter the first number : "<<endl;
        cin>>a;
        cout<<"Enter the second number : "<<endl;
        cin>>b;
        if(x == 1) {
            cout<<"Result : "<<add(a,b)<<endl;
        }
        if(x == 2) {
            cout<<"Result : "<<sub(a,b)<<endl;
        }
        if(x == 3) {
            cout<<"Result : "<<mul(a,b)<<endl;
        }
        if(x == 4) {
            cout<<"Result : "<<divi(a,b)<<endl;
        }
        if(x == 5) {
            cout<<"Result : "<<power(a,b)<<endl;
        }
        if(x == 6) {
            cout<<"Result : "<<mod(a,b)<<endl;
        }
    } while( x < 7 && x > 0);

    return 0;
}