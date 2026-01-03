pattern:
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 

  Code:

   #include <bits/stdc++.h>
using namespace std;
void pattern8(int n){
    int originalN=n;
     n=2*n;
    
    for(int row=1;row<n;row++){
        
        for(int col=1;col<n;col++){
            int leftdis=col,rightdis=n-col,updis=row,downdis=n-row;
            int ateveryIndex=originalN-min({leftdis,rightdis,updis,downdis})+1;
            cout<<ateveryIndex<<" ";
        }
        cout<<endl;
    }

}
int main() {
   pattern8(4);
    return 0;
}

