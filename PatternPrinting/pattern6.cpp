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
void pattern6(int n){
    
     for(int row=1;row<(2*n);row++){
         int totcols=row<=n?row:(n-(row%n));
         int totspace=n-totcols;
         for(int space=1;space<=totspace;space++){
             cout<<" ";
         }
         for(int col=1;col<=totcols;col++){
             cout<<"* ";
         }
         cout<<endl;
     }
}
int main() {
   pattern6(5);
    return 0;
}
