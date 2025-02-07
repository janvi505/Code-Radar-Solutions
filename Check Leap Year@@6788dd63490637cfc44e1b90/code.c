#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
if (a%400==0){
    printf("Leap year %d",a);
}
else if(a%100==0){
    printf("Not a leap year %d",a);
}
else if(a%4==0){
    printf("Leap year %d",a);
}

}
}