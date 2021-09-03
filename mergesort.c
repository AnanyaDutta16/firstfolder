#include<stdio.h>
int main(){
int c[100],m=4,n=4;
int a[]={3,4,5,7};
int b[]={2,3,6,8};
int i=0,j=0,k=0;
while(i<m&&j<n){
    if(a[i]<b[j]){
        c[k]=a[i];
        i++;
        k++;
    }
    else{
        c[k]=b[j];
        j++;
        k++;

    }
}
    while(i<m)
    {
        c[k]=a[i];
        k++;
        i++;


    }
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;

    }
    for(int i=0;i<n+m;i++)
    {
    printf("%d",c[i]);
    }
    printf("\n");
    return 0;
}
