#include <iostream>
using namespace std;
int main(){
   int b;
    cout<<"Please enter a number:";
    cin>>b;
    int i,j,fibon[b];
    fibon[0]=1;
    fibon[1]=1;
        for(i=2;i<b;i++){
            fibon[i]=fibon[i-1]+fibon[i-2];
        }
        for(j=0;j<b;j++){
            cout<<fibon[j]<<"  ";
        }
        cout<<endl;
   system("PAUSE");
   return 0 ;
}