#include <iostream>
using namespace std;

double kare(double x){

    x*=x;

    return x;
}
int main(){
    double kenar;
    double (*fonk)(double);

    fonk=kare;

    cout<<"Karenin bir kenarini girin (metre):";
    cin>>kenar;

    cout<<"Kenar alani:"<<fonk(kenar)<<" metre kare"<<endl;
    
    cout<<endl;

system("PAUSE");
return 0;
}