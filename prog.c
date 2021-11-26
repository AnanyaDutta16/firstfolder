#include<stdio.h>

int main(){
    int n;
     printf("Enter any number: ");
     scanf("%d", &n);

     if(97 % n == 0){
         printf("%d is divisible by 97", n);
     }
     else{
         printf("%d is not divisible by 97", n);
     }
    return 0;
}
