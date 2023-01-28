#include<stdio.h>
int main(){
    int input;
    int is_prime=0;
    input=4;
    for(int i=2;i<input;i++){
        if(input % i ==0 ){
            is_prime++;
        }
    } 

    if(is_prime==0){
        printf("Prime\n");
    }
    else{
        printf("not prime\n");
    }

    return 0;
}

int main(){
    
}
