#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
if (a%400==0){
    printf("Leap year %d");
}
else if(a%100!=0){
    printf("Not a leap year %d");
}
else(a%4==0){
    printf("Leap year %d");
}
}
