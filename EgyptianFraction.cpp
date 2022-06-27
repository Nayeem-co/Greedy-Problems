#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

void EgpFrac(int n, int d){

    if(n == 1){
        cout<<n<<"/"<<d<<endl;
        return;
    }

    double temp = (double)d/n;
    // cout<<"temp"<<temp<<endl;
    
    int k = (int)temp;

    if(temp > (int)temp){
        k = (int)temp + 1;
    }

    cout<<1<<"/"<<k<<endl;
    int g = __gcd(((k*n)-d) , (d*k));
    EgpFrac(((k*n)-d)/g , (d*k)/g);
    

}


int main(int argc, char const *argv[])
{
    EgpFrac(6,14);
    cout<<"yes";
    
    return 0;
}
