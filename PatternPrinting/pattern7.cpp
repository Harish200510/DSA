pattern:
        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 

code:

 #include <bits/stdc++.h>
using namespace std;
void pattern7(int n){
    
     for(int row=1;row<=n;row++){
         
          int totspace=n-row;
          for(int space=1;space<=totspace;space++){
              cout<<"  ";
          }
          
          for(int cols=row;cols>=1;cols--){
              cout<<cols<<" ";
          }
          for(int cols=2;cols<=row;cols++){
              cout<<cols<<" ";
          }
          cout<<endl;
     }
}
int main() {
   pattern7(5);
    return 0;
}

