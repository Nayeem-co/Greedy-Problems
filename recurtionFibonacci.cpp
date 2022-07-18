#include<iostream>
using namespace std;

int fib(int x){
    if(x <= 1){
        return x;
    }
    return (fib(x-1) + fib(x-2));
}


int sumFib(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    return sumFib(n-1) + sumFib(n - 2) + 1;
}

int main(int argc, char const *argv[])
{
    
    cout<<fib(3);
    cout<<endl<<sumFib(3);

    return 0;
}
