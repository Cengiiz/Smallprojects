#include <iostream>
using namespace std;
int main(){
    int a=0,b,i;
        for(b=1;b<=10;b++){
            a++;
            for(i=1;i<=10;i++){
                cout<<a<<"*"<<i<<"="<<a*i<<endl;
            }
	cout<<endl;
        }
    system("PAUSE");
    return 0 ;
}