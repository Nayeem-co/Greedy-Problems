#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int m;
    cin>>n>>m;
    int hole[n];
    int mouse[m];

    for(int i=0 ; i< n ; i++){
        cin>>hole[i];
    }
    for(int i=0 ; i< m ; i++){
        cin>>mouse[i];
    }

    sort(hole,hole+n);
    sort(mouse,mouse+m);

    
    return 0;
}
