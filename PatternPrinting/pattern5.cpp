pattern:

*
* *
* * *
* * * *
* * * * *
* * * *
* * * 
* * 
*

code:

#include <bits/stdc++.h>
using namespace std;
void pattern5(int n){
    
    for(int row=1;row<(2*n);row++){
        int totcols=row<=n?row:(n-(row%n));
        for(int col=1;col<=totcols;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
   pattern5(5);
    return 0;
}
  
