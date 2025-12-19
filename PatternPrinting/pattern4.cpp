pattern:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

code:

#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
int main() {
    pattern1(5);
   
}
