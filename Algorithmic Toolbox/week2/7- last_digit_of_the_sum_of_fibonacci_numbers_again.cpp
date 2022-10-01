#include <iostream>
#include<vector>
using namespace std;

int fibonacci(long long n,int m){
    vector<long long> F;
    int l;
    int ans;
    F.push_back(0);
    F.push_back(1);
    
    for(long long i=2;i<=n+2;i++){
        F.push_back((F.at(i-1)+F.at(i-2))%m);
    
        if(F.at(i)==1 && F.at(i-1)==0){
            l = i-1;
            return (F.at((n+2)%l)-1)%m;
        }
    }
    return (F.at(n+2)-1)%m;
}

int main() {
    long long n,m;
    cin>>m>>n;
    int ans = (fibonacci(n,10)-fibonacci(m-1,10)+10)%10;
    cout<<ans<<"\n";
    return 0;
}