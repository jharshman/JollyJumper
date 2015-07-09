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
        
        int d[ARRAYSIZE];
        int a[ARRAYSIZE];
        int n;
        bool isjolly;

        while(!(cin>>n).eof()) { // gets the n
                int i;
                for(i=0;i<n;i++)  // populate up to n
                        cin >> a[i];
                
                memset(d,0,sizeof(a));  // zero the array

                for(int k=0; k< n; k++)
                        cout << a[k] << endl;

                isjolly=true;
                for(i=0;i<n-1;i++) {
                        int absolute=abs(a[i]-a[i+1]);
                        if (d[absolute]==1||absolute<1||absolute>n-1) {
                                isjolly=false;
                                break;
                        }
                        d[absolute]=1;
                }

                if(isjolly)  
                        cout << "Jolly" << endl;
                else 
                        cout << "Not Jolly" << endl;

        }

        return 0;

}
