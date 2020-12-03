#include <iostream>
#include <cstring>
#include<math.h>
using namespace std ;
int gcm(int x,int y){
    int i,gcm=0;
        if(x>y){
            for(i=x;i>0;i--){
                if(x%i==0&&y%i==0){
                    gcm=i;
                    break;
                }
            }
        }
        else {
            for(i=y;i>0;i--){
                if(x%i==0&&y%i==0){
                    gcm=i;
                    break;
                }
            }
        }
    return gcm;
}
int main(){
    int x,y;
    cout<<"Please enter the two numbers:";
    cin>>x>>y;
    cout<<"GCM="<<gcm(x,y)<<endl;
    cout<<"LCM="<<(x*y)/gcm(x,y)<<endl;
    system("PAUSE");
    return 0;
}