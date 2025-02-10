#include <stdio.h>
int main(){
    int a;
    if (a%4==0 && a%400==0 ){
        printf("Leap year");
    }
    else if(a%100!=0){
        printf("Not a leap year");
    }
}
