#include<stdio.h>

void af(int a[],int n){

    for(int i=0;i<n;i++){
        a[i]=i+1;
        printf("%d",a[i]);
        if(i<n-1){
         printf(" ");
        }
       
    }

}

int main(){

    int n;
    scanf("%d",&n);
    int a[n];
   
    af(a,n);

    return 0;
}