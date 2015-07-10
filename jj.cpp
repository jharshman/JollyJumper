/**
 * jj.cpp
 * solution to jolly jumper problem
 * written by Josh Harshman
 * 07/08/15
 * */

#include <cmath>
#include <cstring> 
#include <iostream>
using namespace std;

#define ARRAYSIZE 3000

int main(void) {
        int b[ARRAYSIZE];
        int a[ARRAYSIZE];
        int n;
        bool isjolly;

        while(!(cin>>n).eof()) { // gets the n
                int i;
                for(i=0;i<n;i++)  // populate up to n
                        cin >> a[i];

                memset(b,0,sizeof(a));  // zero the array
                isjolly=true;

                for(i=0;i<n-1;i++) {
                        int absolute=abs(a[i]-a[i+1]);
                        if (b[absolute]==1||absolute<1||absolute>n-1) {
                                isjolly=false;
                                break;
                        }
                        b[absolute]=1;
                }
                if(isjolly)  
                        cout << "Jolly" << endl;
                else 
                        cout << "Not jolly" << endl;
        }
        return 0;
}

