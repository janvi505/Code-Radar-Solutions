#include <stdio.h>
int main(){

    int i,j,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}