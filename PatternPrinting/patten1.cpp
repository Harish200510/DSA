step1:
   ->The number of row times run the outer loop
   no.of lines or rows==now of times outer loop runs
step2:
    ->Identify the every row numbers
    ->how many cols are there
    ->Identify what they are asking to print star or numbers

pattern:

* * * *
* * * *
* * * *
* * * *

code:

#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    pattern1(4);
   
}
