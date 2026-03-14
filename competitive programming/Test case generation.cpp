

assume:
    constraint is:
              1<= T <=10;
              1<= N  <=100000;
              1<= A[i] <=1000000;
     


code:(In code i just used % (2,5,10) for demo perpose otherwise the testcase will be very large):


#include <bits/stdc++.h>
using namespace std;
int main() {
    
    srand(time(NULL));

     int t=rand()%2+1;
     cout<<t<<endl;
     while(t--){
         int n=rand()%5+1;
         cout<<n<<endl;
         for(int i=0;i<n;i++){
             cout<<(rand()%10+1)<<" ";
         }
         cout<<endl;
     }
}
