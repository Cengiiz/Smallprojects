#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double  pi = atan(1.0) * 4;
    double hata,sart=0.01,hesapalan,gercekalan,ilkhesap,n,r;
    double alfa;
    double hatapoz;
    
    cout<<"Lutfen ikiz kenarin uzunlugunu giriniz:";
    cin>>r;
    cout<<"Lutfen ucgenin arasinda ki aciyi giriniz:";
    cin>>alfa;
    n=360/alfa;
    cout<<endl;
    gercekalan=pi*r*r;
    ilkhesap=(n*r*r*sin(alfa*(pi/180)))/2;  
    hatapoz=abs(((gercekalan-ilkhesap)/gercekalan)*100);   
        while (hatapoz>=sart){
            alfa=360/n;
            hesapalan=(n*r*r*sin(alfa*(pi/180)))/2;
            
            hata=((gercekalan-hesapalan)/gercekalan)*100;  
            hatapoz=abs(hata);
            n=n+1;
        }
    cout<<"Ikiz kenar ucgenlerin toplam alani="<<ilkhesap<<endl<<endl;
    cout<<"Cemberin gercek alani="<<gercekalan<<endl<<endl;
    cout<<"Hesaplanan alan="<<hesapalan<<endl<<endl;    
    cout<<"Hata payi="<<hatapoz<<endl<<endl;    
    cout<<"N="<<n<<endl<<endl;
    
    system("PAUSE");
    return 0;
}