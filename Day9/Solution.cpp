#include <iostream>

using namespace std;

int factorial(int n){
    int fact = 1;
    if (n == 1){
        return 1;
    }else{
        for(int i = 1; i<=n; ++i){
            fact = fact*i;
        }
        return fact;
    }
}

int main(){
    int N;
    cin >> N;

    cout<<factorial(N);

    return 0;
}
