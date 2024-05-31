// ----RAIYAAN----
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num = 34 ; 
    int x ; 
    cout<<"Guess the number between 1 to 100"<<endl;
    cin>>x;
    int count = 0 ;
    while(x != num){
        if(x < num){
            cout<<"Please guess a higher number"<<endl;
            cin>>x ;
        }
        else{
            cout<<"Please guess a lower number"<<endl;
            cin>>x;
        }
        count++ ;
    }
    cout<<"You have correctly guessed the number in "<<count<<" attempts."<<endl;
    return 0;
}