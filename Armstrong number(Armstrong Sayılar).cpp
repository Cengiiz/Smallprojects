//The sum of the cubes of the numerical values ​​of the digits in all its digits, the numbers equal to itself are called the "Armstrong number".
//Tüm basamaklarındaki rakamların sayı değerlerinin küpleri toplamı, kendisine eşit olan sayılara "Armstrong sayı" denir.

#include <iostream>
using namespace std ;

int main(){

int low_limit,units,tenth,hundreds;

    for(low_limit=100;low_limit<=999;low_limit++){
        units =low_limit%10;
        tenth=low_limit%100;
        tenth=tenth/10;
        hundreds=low_limit/100;
            if(low_limit==(units*units*units )+(tenth*tenth*tenth)+(hundreds*hundreds*hundreds)){
                cout<<"Armstrong number:"<<low_limit<<endl;                
            } 
    }
system ("PAUSE");
return 0;
} 