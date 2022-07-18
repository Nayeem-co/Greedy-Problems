#include<iostream>
using namespace std;


// O(n) complexity
int power(int x,int y){
    if(y == 0){
        return 1;
    }
    else{
        return x*power(x,y-1);
    }
}

int main(int argc, char const *argv[])
{
    int x;
    int y;

    cin>>x>>y;

    cout<<power(x,y);
    return 0;
}
