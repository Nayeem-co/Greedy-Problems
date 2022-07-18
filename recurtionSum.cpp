#include<iostream>
using namespace std;

int sum(int x){
    if(x == 0){
        return 0;
    }
    return (sum(x-1)+x);
}

int main(int argc, char const *argv[]){
    

    cout<<sum(100);

    return 0;
}
