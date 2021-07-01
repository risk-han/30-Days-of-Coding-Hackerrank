#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDout */

    int n;
    string nama, notelp, key;
    
    map<string, string>bukutelp;

    cin>>n;
    

    for(int i = 0; i<n; i++){
        cin>>nama>>notelp;
        bukutelp[nama] = notelp;
    }
    while(cin>>key)
    {
        if(bukutelp.find(key) != bukutelp.end())
        {
            cout<<key<<"="<<bukutelp.find(key)->second<<endl;
        }
        else
        {
            cout<<"Not found"<<endl;
        }
    
    }

    return 0;

}