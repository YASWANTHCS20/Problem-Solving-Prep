#include<stdio.h>
int main(){
    int input=10,count=0;
    for(int i=0;i<=input/2;i++){
        if(input==i*i){
         count++;
         }
         else{
            continue;
        }

    }

    if(count==1){
        printf("YES");
    }
    else
        printf("NO");

}
